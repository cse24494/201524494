#define MAX_SIZE 50
#define MAX_NAME_LINE 10
#define MAX_PHONE_NUMBER 20

struct UserList{
  char userName[MAX_NAME_LINE];
  char userPhoneNumber[MAX_PHONE_NUMBER];
  struct UserList *next;
};

void enrollInformation(struct UserList *list);
void findInformation(struct UserList *list);
void printAllInformation(struct UserList *list);
void deleteInformation(struct UserList *list);
