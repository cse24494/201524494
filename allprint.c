#include <stdio.h>
#include <string.h>
#include "main.h"

extern int size;
void printAllInformation(struct UserList *list){
 int i = 0;
 printf("<<<전화번호목록>>>\n");
 for(i = 0; i < size; i++){
  printf("%s\t%s\n", list[i].userName, list[i].userPhoneNumber);
 }
 printf("\n");
}
