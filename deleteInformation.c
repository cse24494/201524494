#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

extern struct UserList *list, *head, *tail;
void deleteInformation(struct UserList *list) {
  struct UserList *temp;
  char findName[MAX_NAME_LINE];
  printf("삭제할 이름 : ");
  scanf("%s", findName);
  printf("\n");
 list = head; 
 while(list != NULL) {
   if(strcmp(findName, list->userName) == 0){
      temp = tail;
      free(list);
   break;
   }
  list = list->next;
  temp = list->next;
  }
 printf("%s 정보 삭제 완료!",findName);
 printf("\n");
}
  
