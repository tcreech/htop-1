/* Do not edit this file. It was automatically genarated. */

#ifndef HEADER_ClockMeter
#define HEADER_ClockMeter
/*
htop
(C) 2004-2006 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "Meter.h"

#include "ProcessList.h"

#include <curses.h>
#include <time.h>

#include "debug.h"


typedef struct ClockMeter_ ClockMeter;

struct ClockMeter_ {
   Meter super;
   ProcessList* pl;
   char clock[10];
};


ClockMeter* ClockMeter_new();

void ClockMeter_setValues(Meter* cast);

void ClockMeter_display(Object* cast, RichString* out);

#endif
