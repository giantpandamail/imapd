/* ========================================================================
 * Copyright 1988-2007 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

/*
 * Program:	Operating-system dependent routines -- Pyramid OSx 4.4c version
 *
 * Author:	Mark Crispin
 *
 * Date:	11 May 1989
 * Last Edited:	30 January 2007
 */

#include <strings.h>
#include <sys/types.h>
#include <sys/dir.h>
#include <fcntl.h>
#include <syslog.h>
#include <sys/file.h>


char *strtok (char *s,char *ct);
char *strtok_r (char *s,char *ct,char **r);
char *strstr (char *cs,char *ct);
char *strpbrk (char *cs,char *ct);
char *strerror (int n);
void *memmove (void *s,void *ct,size_t n);
void *memset (void *s,int c,size_t n);
void *malloc (size_t byteSize);
void free (void *ptr);
void *realloc (void *oldptr,size_t newsize);

int errno;

#define memcpy memmove
#define strchr index
#define strrchr rindex

#include "env_unix.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"
