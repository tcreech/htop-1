/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_ListItem
#define HEADER_ListItem
/*
htop - ListItem.h
(C) 2004-2006 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "String.h"
#include "Object.h"
#include "RichString.h"
#include <string.h>

#include "debug.h"


typedef struct ListItem_ {
   Object super;
   char* value;
   int key;
} ListItem;


#ifdef DEBUG
extern char* LISTITEM_CLASS;
#else
#define LISTITEM_CLASS NULL
#endif

ListItem* ListItem_new(const char* value, int key);

void ListItem_append(ListItem* this, char* text);

const char* ListItem_getRef(ListItem* this);

int ListItem_compare(const void* cast1, const void* cast2);


#endif
