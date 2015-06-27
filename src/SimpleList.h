#ifndef SimpleList_H
#define SimpleList_H


typedef struct Element_t{
  struct Element_t *next;
  void *data;               // so that we can point to anything
}Element;

typedef struct {
  Element *head;
  int length ;
}List;

List *listCreate();

Element *elementCreate( void *data);

void elementDestroy(Element *elem);

#endif // SimpleList_H
