#include "FindEle.h"
#include "SimpleList.h"
#include <stdlib.h>
#include <stdio.h>

int intCompare(void *first, void *second){
  int *ptr=(int *)(first);
  int *ptr1=(int *)(second);

  if(*ptr==*ptr1)
  {
    return 0;
  }

  else
    return 1;
}

int strCompare (void *first, void *second){

  char *ptr=(char *)(first);
  char *ptr1=(char *)(second);

    if(strcmp(ptr,ptr1)==0)
  {
    return 0;
  }

  else
    return 1;

}

Element *listFind(List *list, void *data, int(*compare)(void *,void *)){
  Element *ptr;

  ptr=list->head;

  while (compare(ptr ->data , data)){
    ptr =ptr->next;
  }

  return ptr;
}

// Element *listFind(List *list, void *data){
  // Element *ptr;

  // ptr=list->head;

  // while (ptr ->data != data){
    // ptr =ptr->next;
    // printf("%d\n",*(int *)(ptr->data));
  // }

  // printf("*(int *)(ptr->data)=%d\n",*(int *)(ptr->data));
  // 1) ptr->data is a pointer to address
  // 2) (int *) type cast it to become pointer to int
  // 3) point to the address

  // printf("(int *)(ptr->data)=%d\n",(ptr ->(int *)data));
  // return ptr;
// }




