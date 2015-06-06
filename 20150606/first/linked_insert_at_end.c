#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int age;
	int score;
	char name[64];
	struct student* next;
};

int main()
{
	struct student* head = (struct student*)malloc(sizeof(struct student));
	strcpy(head->name,"Alex Li"); //strcpy一般用于给数组赋值,或者说给字符串赋值
	head->age = 25;
	head->score = 99;
	head->next = NULL;

	int total = 5;
	int i = 0;
	//insert struct afer tail
	for (i=0;i<total;i++) {
		struct student* node = (struct student *)malloc(sizeof(struct student));
		strcpy(node->name,"Alex");
		node->age = i;
		node->score = i*2;
		node->next=NULL;
		

	struct student* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = node;
	}
	struct student* p = head;
	for (i=0;i<total;i++)
	{
		 printf("name=%s age=%d score=%d\n",p->name,p->age,p->score);
	}
	
	return 0;
}
