#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

extern const char userPassword[];
extern struct UserList *list, *head, *tail;
int size;
void enrollInformation(struct UserList *list) {
  char password[10];
  static int errorCount = 0;
  const char userPassword[]="qwer1234";
  struct UserList *head, *tail;
 printf("비밀번호를 입력하세요.\n");
 do{
  scanf("%s", password);
  if(strncmp(userPassword, password, 8) == 0) {
    printf("등록할 이름 : ");
    scanf("%s", list[size].userName);
    printf("전화번호 : ");
    scanf("%s", list[size].userPhoneNumber);
    printf("%s 정보 등록 완료!\n\n", list[size].userName);
    errorCount = 0;
    size++;
    break;
  }
  else if(strncmp(userPassword, password, 8) != 0) {
   errorCount++;
   if(errorCount == 3) {
    printf("비밀번호(3회 실패) : 등록할수 없음!\n\n");
    printf("프로그램을 종료합니다.\n\n");
    exit(1);
   }
   else{
    printf("비밀번호(%d회실패) : %s\n",errorCount,password);
   }
  }
 }while(errorCount != 3);
}
