#ifndef FindEle_H
#define FindEle_H

#include "SimpleList.h"

Element *listFind(List *list,void *data, int(*compare)(void *,void *));

int intCompare(void *first, void *second);
int strCompare(void *first, void *second);

#endif // FindEle_H
