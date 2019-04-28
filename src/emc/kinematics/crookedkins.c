/********************************************************************
* Description: crookedkins.c
*   Kinematics for crooked 3 axis machines
*   Designed to compensate angular alignment errors between the axes and spindle
*   Assuming the spindle is aligned normal to the XY-plane
*
*   Derived from a work by Fred Proctor, Alex Joni & Chris Radek
*
* Author: David Reiser
* License: GPL Version 2
* System: Linux
*    
* Copyright (c) 2019 All rights reserved.
*
* Last change:28th April 2019
********************************************************************/

#include "kinematics.h"             /* these decls */
#include "rtapi_math.h"             /*realtime math library*/

#include "hal.h"
struct haldata {
  hal_float *
} *haldata = 0;

#define XYang (*(haldata->xyang))   /*angle between X and Y*/
#define XZang (*(haldata->xyang))   /*angle between X and Z*/
#define YZang (*(haldata->xyang))   /*angle between Y and Z*/

int kinematicsForward(const double *joints,
		                  EmcPose * pos,
		                  const KINEMATICS_FORWARD_FLAGS * fflags,
                      KINEMATICS_INVERSE_FLAGS * iflags)
{
  
}
