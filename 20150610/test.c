#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef struct custom{
        char username[30];
        char password[20];
        char sex[6];
        int age;
        char email[30];
        int fansCount;
        int markCount;
        struct custom* next;
}User;

int main()
{
	User* head = (User*)malloc(sizeof(User*));
	head->next = NULL;
	int total=3;
	int i=0;
	char name[10];
	int Age;
	for (i=0;i<total;i++) {
		User* node = (User*)malloc(sizeof(User*));
		printf("输入用户名:");
		scanf("%s",name);
		strcpy(node->username,name);
		printf("输入年龄:");
		scanf("%d",&Age);
                node->age = Age;
		//printf("年龄为:%d\n",node->age);
                node->next=NULL;
		
		node->next = head;
		head = node;
	}
	
	User* p = head;
	while (p != NULL) {
		printf("name=%s age=%d \n",p->username,p->age);
		p = p->next;
	}
	return 0;
}
