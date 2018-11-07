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
 * Program:	Operating-system dependent routines -- TOPS-20 version
 *
 * Author:	Mark Crispin
 *
 * Date:	1 August 1988
 * Last Edited:	30 January 2007
 */


/* Dedication:
 * This file is dedicated with affection to the TOPS-20 operating system, which
 * set standards for user and programmer friendliness that have still not been
 * equaled by more `modern' operating systems.
 * Wasureru mon ka!!!!
 */

#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/file.h>
#include <unistd.h>

#include "env_t20.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"

long gethostid (void);
char *getpass (const char *prompt);

#define strtok_r(a,b,c) strtok(a,b)
