/********************************************************************
* Description: sincos.c
*
*   Derived from a work by Fred Proctor & Will Shackleford
*
* Author:
* License: LGPL Version 2
* System: Linux
*    
* Copyright (c) 2004 All rights reserved.
*
* Last change: 
* $Revision$
* $Author$
* $Date$
********************************************************************/
/*
   sincos.c

   Modification history:

  21-Jan-2004  P.C. Moved across from the original EMC source tree.
*/

#include "config.h"

#if defined(RTAPI) && !defined(SIM)
#undef HAVE_SINCOS
#endif

#ifndef HAVE_SINCOS

#include "rtapi_math.h"
#include "sincos.h"

#ifndef HAVE___SINCOS

#include "posemath.h"

void sincos(double x, double *sx, double *cx)
{
    *sx = sin(x);
    *cx = cos(x);
}

#endif

#endif
