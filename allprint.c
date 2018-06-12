#include <stdio.h>
#include <string.h>
#include "main.h"

extern struct UserList *list, *head, *tail;
void printAllInformation(struct UserList *list){
 int i = 0;
 printf("<<<전화번호목록>>>\n");
 list = head;
 while( list != NULL) {
  printf("%s\t%s\n", list->userName, list->userPhoneNumber);
 list = list->next;
 }
 printf("\n");
}
