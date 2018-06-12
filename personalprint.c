#include <stdio.h>
#include <string.h>
#include "main.h"

extern struct UserList *list, *head, *tail;
void findInformation(struct UserList *list){
 char findName[MAX_NAME_LINE];
 printf("검색할 이름 : ");
 scanf("%s", findName);
 printf("\n");
 list = head;
while(list != NULL) {
  if(strcmp(findName, list->userName) == 0){
   printf("%s\t%s\n", list->userName, list->userPhoneNumber);
   break;
  }
  list = list->next;
 }
 printf("\n");
}
