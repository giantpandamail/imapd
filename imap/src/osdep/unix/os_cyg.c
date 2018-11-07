/* ========================================================================
 * Copyright 1988-2006 University of Washington
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
 * Program:	Operating-system dependent routines -- Cygwin version
 *
 * Author:	Mark Crispin
 *
 * Date:	1 August 1988
 * Last Edited:	30 August 2006
 */

#include "tcp_unix.h"		/* must be before osdep includes tcp.h */
#include "mail.h"
#include "osdep.h"
#include <stdio.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <ctype.h>
#include <errno.h>
extern int errno;		/* just in case */
#include <pwd.h>
#include <crypt.h>
#include "misc.h"


#define isodigit(c)    (((unsigned)(c)>=060)&((unsigned)(c)<=067))
#define toint(c)       ((c)-'0')

#include "fs_unix.c"
#include "ftl_unix.c"
#include "nl_unix.c"
#include "env_unix.c"
#include "tcp_unix.c"
#include "gr_wait.c"
#include "tz_nul.c"
#include "flockcyg.c"
#include "gethstid.c"


/* Emulator for geteuid() call
 * Returns: effective UID
 */

#undef geteuid

uid_t Geteuid (void)
{
  uid_t ret = geteuid ();
  return (ret == SYSTEMUID) ? 0 : ret;
}
