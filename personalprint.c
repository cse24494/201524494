#include <stdio.h>
#include <string.h>
#include "main.h"

extern int size;
void findInformation(struct UserList *list){
 char findName[MAX_NAME_LINE];
 printf("검색할 이름 : ");
 scanf("%s", findName);
 printf("\n");
 for(int i=0; i<size; i++){
  if(strcmp(findName, list[i].userName) == 0){
   printf("%s\t%s\n", list[i].userName, list[i].userPhoneNumber);
   break;
  }
 }
 printf("\n");
}
