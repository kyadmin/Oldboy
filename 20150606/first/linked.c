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
	strcpy(head->name,"Rainwang"); //strcpy一般用于给数组赋值,或者说给字符串赋值
	head->age = 25;
	head->score = 99;
	head->next = NULL;

	int total = 5;
	int i = 0;
	//insert struct before head
	for (i=0;i<total;i++) {
		struct student* node = (struct student *)malloc(sizeof(struct student));
		//strcpy(node->name,"Alex");
		sprintf(node->name,"Alex-%d",i);
		node->age = i;
		node->score = i*2;
		node->next=NULL;

		node->next = head;
		head = node;
	}
	struct student* p = head;
	while (p != NULL) {
		printf("name=%s age=%d score=%d\n",p->name,p->age,p->score);
		p = p->next;
}
	return 0;
}
