#include "SimpleList.h"
#include <stdlib.h>

List *listCreate(){
  List *list=malloc(sizeof(List));
  list->head=NULL;
  list->length=0;
}

Element *elementCreate( void *data){
  Element *elem=malloc(sizeof(Element));
  elem->next=NULL;
  elem->data=data;
  return elem;
}

void elementDestroy(Element *elem){
}