/*--------------------------------------------------------------------
 *	$Id$
 *
 *	Copyright (c) 1991-2013 by P. Wessel, W. H. F. Smith, R. Scharroo, J. Luis and F. Wobbe
 *	See LICENSE.TXT file for copying and redistribution conditions.
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as published by
 *	the Free Software Foundation; version 3 or any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	Contact info: gmt.soest.hawaii.edu
 *--------------------------------------------------------------------*/
/*
 * gmt_lib.h is the main include file for the low-level gmt library files.
 * It is not needed to distribute the API but required by all gmt_*.c files.
 *
 * Author:	Paul Wessel
 * Date:	20-DEC-2013
 * Version:	5 API
 */

#pragma once
#ifndef _GMT_LIB_H
#define _GMT_LIB_H

#ifdef __cplusplus	/* Basic C++ support */
extern "C" {
#endif

/* CMake definitions: This must be first! */
#include "gmt_config.h"
#include "gmt_notposix.h"       /* Non-POSIX extensions */
#include "gmt_version.h"        /* Only contains the current GMT version number */
#include "gmt_dev.h"
#include "gmt_internals.h"

/* Declaration modifiers for DLL support (MSC et al) */
#include "declspec.h"

#ifdef __cplusplus
}
#endif

#endif  /* !_GMT_LIB_H */
