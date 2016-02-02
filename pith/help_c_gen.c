/*
 * ========================================================================
 * Copyright 2006-2007 University of Washington
 * Copyright 2013-2016 Eduardo Chappa
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct helplist {
    char            *name;
    struct helplist *next;
} HELPLIST_S;


HELPLIST_S *help_list;


void  preamble(FILE *ofp);
void  body(FILE *ifp, FILE *ofp);
char *quote_clean(char *rawline);
int   only_tags(char *line);
int   append_to_help_list(HELPLIST_S **, char *new);
void  print_help_list(HELPLIST_S *, FILE *fp);


int
main(int argc, char **argv)
{
    preamble(stdout);
    body(stdin, stdout);
    exit(0);
}


void
preamble(FILE *ofp)
{
    fprintf(ofp, "\n\t\t/*\n");
    fprintf(ofp, "\t\t * AUTMATICALLY GENERATED FILE!\n");
    fprintf(ofp, "\t\t * DO NOT EDIT!!\n");
    fprintf(ofp, "\t\t * See help_c_gen.c.\n\t\t */\n\n\n");
    fprintf(ofp, "#include <stdio.h>\n#include \"headers.h\"\n#include \"helptext.h\"\n\n");
}


void
body(FILE *ifp, FILE *ofp)
{
    char  rawline[10000];
    char *line;
#define SPACE ' '
    char *p, *helpname;
    int   in_text = 0, new_topic = 0, first_one = 1, justtags;

    while(fgets(rawline, sizeof(rawline), ifp) != NULL){
	if(rawline[0] == '#')
	  continue;

	line = quote_clean(rawline);

	if(!line){
	    /*
	     * Put errors in result so that it will cause a compile
	     * error and be noticed.
	     */
	    fprintf(ofp, "Error: quote_clean returns NULL for help line\n  %s\n", rawline);
	    exit(-1);
	}

	justtags = 0;
	if(!strncmp(line, "====", 4)){
	    p = line;
	    /* skip to first space */
	    while(*p && *p != SPACE)
	      p++;

	    if(!*p){
		fprintf(ofp, "Error: help input line\n  %s\n No space after ====\n", rawline);
		exit(-1);
	    }

	    /* skip spaces */
	    while(*p && *p == SPACE)
	      p++;

	    if(!*p){
		fprintf(ofp, "Error: help input line\n  %s\n Missing helpname after ====\n", rawline);
		exit(-1);
	    }

	    helpname = p;

	    /* skip to next space */
	    while(*p && *p != SPACE)
	      p++;

	    *p = '\0';		/* tie off helpname */

	    /* finish previous one */
	    if(in_text)
	      fprintf(ofp, "NULL\n};\n\n\n");

	    in_text = new_topic = 1;

	    fprintf(ofp, "char *%s[] = {\n", helpname);

	    if(append_to_help_list(&help_list, helpname) < 0){
		fprintf(ofp, "Error: Can't allocate memory for help_list after line\n  %s\n", rawline);
		exit(-1);
	    }
	}
	else if(line[0] == '\0'){
	    if(in_text)
	      fprintf(ofp, "\" \",\n");		/* why the space? */
	}
	else if(only_tags(line)){
	    if(in_text){
		fprintf(ofp, "\"%s\",\n", line);
		justtags = 1;
	    }
	}

	if(line[0] && line[0] != '='){
	    if(in_text && !justtags){
		if(first_one){
		    first_one = 0;
		    fprintf(ofp, "/*\n");
		    fprintf(ofp, "TRANSLATORS: The translation strings for pith/helptext.c\n");
		    fprintf(ofp, "are automatically generated by a script from the help\n");
		    fprintf(ofp, "text in pith/pine.hlp. This means that the translation job for\n");
		    fprintf(ofp, "the help text is particularly difficult.\n");
		    fprintf(ofp, "This is HTML source so please leave the text inside HTML tags untranslated.\n");
		    fprintf(ofp, "HTML tags like <LI> or <TITLE> should, of course, be left untranslated.\n");
		    fprintf(ofp, "Special HTML characters like &lt; (less than character) should be left alone.\n");
		    fprintf(ofp, "Alpine option names are short phrases with the words separated by\n");
		    fprintf(ofp, "dashes. An example of an option name is Quell-Extra-Post-Prompt.\n");
		    fprintf(ofp, "Option names should not be translated.\n");
		    fprintf(ofp, "The file pith/helptext.c contains many separate help topics.\n");
		    fprintf(ofp, "Some of them are very short and some are long. If left unsorted the\n");
		    fprintf(ofp, "text for a single topic is together in the translation file. The start\n");
		    fprintf(ofp, "of each new topic is marked by the comment\n");
		    fprintf(ofp, "TRANSLATORS: Start of new help topic.\n");
		    fprintf(ofp, "*/\n");
		}
		else if(new_topic){
		    new_topic = 0;
		    fprintf(ofp, "/* TRANSLATORS: Start of new help topic. */\n");
		}

		fprintf(ofp, "N_(\"%s\"),\n", line);
	    }
	    else{
		; /* skip leading cruft */
	    }
	}
    }

    if(in_text)
      fprintf(ofp, "NULL\n};\n\n\n");

    print_help_list(help_list, ofp);
}


char *
quote_clean(char *rawline)
{
    char *p, *q, *cleaned = NULL;
    size_t len;

    if(rawline){
	len = strlen(rawline);
	cleaned = (char *) malloc((2*len+1) * sizeof(char));

	if(cleaned){
	    p = rawline;
	    q = cleaned;

	    while(*p && *p != '\n'){
		if(*p == '"' && !(p > rawline && *(p-1) == '\\'))
		  *q++ = '\\';

		*q++ = *p++;
	    }

	    *q = '\0';
	}
    }

    return cleaned;
}


int
only_tags(char *line)
{
    char *p;
    int   is_tags = 1;	/* only tags seen so far */

    if(!line)
      return 0;

    p = line;

    while(is_tags && *p){
	/* leading space before a tag */
	while(*p && isspace(*p))
	  p++;

	if(*p == '<'){
	    p++;
	    /* skip through interior of tag */
	    while(*p && *p != '<' && *p != '>')
	      p++;

	    if(*p == '>'){
		p++;
		/* trailing space after tag */
		while(*p && isspace(*p))
		  p++;
	    }
	    else
	      is_tags = 0;
	}
	else if(*p)
	  is_tags = 0;
    }

    return is_tags;
}


int
append_to_help_list(HELPLIST_S **head, char *name)
{
    HELPLIST_S *new, *h;
    size_t len;

    if(!(name && *name && head))
      return 0;

    new = (HELPLIST_S *) malloc(sizeof(*new));
    if(!new)
      return -1;

    memset(new, 0, sizeof(*new));
    len = strlen(name);
    new->name = (char *) malloc((len+1) * sizeof(char));
    strncpy(new->name, name, len);
    new->name[len] = '\0';

    if(*head){
	for(h = *head; h->next; h = h->next)
	  ;

	h->next = new;
    }
    else
      *head = new;

    return 0;
}


void
print_help_list(HELPLIST_S *head, FILE *fp)
{
    HELPLIST_S *h;

    if(head){
	fprintf(fp, "struct help_texts h_texts[] = {\n");

	for(h = head; h; h = h->next)
	  if(h->name && h->name[0])
	    fprintf(fp, "{%s,\"%s\"},\n", h->name, h->name);

	fprintf(fp, "{NO_HELP, NULL}\n};\n");
    }
}
