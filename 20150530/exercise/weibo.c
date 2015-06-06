#include <stdio.h>

struct markinfo {
	char username[260];
	struct info* next;
};

char username[260];
char passwd[260];
int age;
int fansCount;
int markCount;
struct user* next;
struct markinfo * fansList;
struct user* g_allUserList;
