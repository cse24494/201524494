#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

extern struct UserList *list, *head, *tail;
void deleteInformation(struct UserList *list) {
  struct UserList *temp = NULL;
  char findName[MAX_NAME_LINE];
  printf("삭제할 이름 : ");
  scanf("%s", findName);
  printf("\n");
 temp = head;
 list = head; 
 while(list != NULL) {
   if(!strcmp(findName, list->userName)) {
      if(list == head) {
        head = list->next;
        free(list);
        break;
      }
      else if(list == tail) {
        tail = temp;
        tail->next = NULL;
        free(list);  
        break;
      }
      else {		
        temp->next = list->next;
        free(list); 
        break;
      }
   }
  else { 
   temp = list;
   list = list->next;
  } 
 }
 printf("%s 정보 삭제 완료!",findName);
 printf("\n");
 list = NULL;
}
  
