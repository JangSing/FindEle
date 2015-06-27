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

void test_findElement_integer(void)
{
	int value1 =1;
	int myvalue1 =1;
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
  elem=listFind(list,&myvalue1,intCompare);

  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL(1,*(int *)(elem->data));

}

void test_findElement_string(void)
{
  char *str1 ="one";
  char *str3 ="three";
  char *str4 ="four";
  char *str6 ="six";
  char *str7 ="seven";
  char *mystr4="four";

  List *list = listCreate();
  Element *elem, *elemNext ;

  elemNext=elementCreate(str6);

  elem=elementCreate(str4);
  elem->next=elemNext;
  elemNext=elem;

  elem=elementCreate(str1);
  elem->next=elemNext;
  elemNext=elem;

  elem=elementCreate(str7);
  elem->next=elemNext;
  elemNext=elem;

  elem=elementCreate(str3);
  elem->next=elemNext;
  elemNext=elem;

  elem = elementCreate(str3);
  elem->next=elemNext;
  list->head=elem;

  elem=NULL;
  elem=listFind(list,mystr4,strCompare);

  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL("four",(char *)(elem->data));

}
