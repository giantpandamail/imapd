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
 * Program:	Operating-system dependent routines -- Convex version
 *
 * Author:	Mark Crispin
 *
 * Date:	11 May 1989
 * Last Edited:	30 August 2006
 */

#include <string.h>
#include <sys/types.h>
#include <sys/dir.h>
#include <sys/timeb.h>
#include <fcntl.h>
#include <syslog.h>
#include <sys/file.h>


void *malloc (size_t byteSize);
void *realloc (void *oldptr,size_t newsize);

#include "env_unix.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"
