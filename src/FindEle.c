#include "FindEle.h"
#include "SimpleList.h"
#include <stdlib.h>
#include <stdio.h>

Element *listFind(List *list, void *data){
  Element *ptr;
  
  
  ptr=list->head;
  
  
  
  while (ptr ->data != data){
    ptr =ptr->next;
    // printf("%d\n",*(int *)(ptr->data));
  }
  
  // printf("*(int *)(ptr->data)=%d\n",*(int *)(ptr->data));      
  // 1) ptr->data is a pointer to address
  // 2) (int *) type cast it to become pointer to int
  // 3) point to the address
  
  
  
  
  
  
  // printf("(int *)(ptr->data)=%d\n",(ptr ->(int *)data));
  return ptr;
}


