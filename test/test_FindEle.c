#include "unity.h"
#include "FindEle.h"
#include "SimpleList.h"
#include <stdlib.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_findElement(void)
{
	int value1 =1;
	int value3 =3;
	int value4 =4;
	int value6 =6;
	int value7 =7;
  
  List *list = listCreate();
  Element *elem, *elemNext ;
  
  elemNext=elementCreate(&value6);
  
  elem=elementCreate(&value4);
  elem->next=elemNext;
  elemNext=elem;
  
  elem=elementCreate(&value1);
  elem->next=elemNext;
  elemNext=elem;  
  
  elem=elementCreate(&value7);
  elem->next=elemNext;
  elemNext=elem;
  
  elem=elementCreate(&value3);
  elem->next=elemNext;
  elemNext=elem;
  
  elem = elementCreate(&value3);
  elem->next=elemNext;  
  list->head=elem;
  
  elem=NULL;
  elem=listFind(list,&value1);
  
  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL(1,*(int *)(elem->data));
  
}
