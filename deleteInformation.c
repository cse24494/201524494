#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

extern int size;

void deleteInformation(struct UserList *list) {
  int i;
  int j;
  char findName[MAX_NAME_LINE];
  printf("삭제할 이름 : ");
  scanf("%s", findName);
  printf("\n");
  for(i=0; i < size; i++){
   if(strcmp(findName, list[i].userName) == 0){
     for(j = i ; j< size; j++) {
     list[j] = list[j+1];
     }
     size--;
   break;
   }
  }
 printf("%s 정보 삭제 완료!",findName);
 printf("\n");
}
  
