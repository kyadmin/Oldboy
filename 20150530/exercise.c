#include <stdio.h>
#include <stdlib.h>
typedef struct stu{
	int num;
	int score;
	struct stu * next;
}STU;
STU * create(void)
{
	STU * head = (STU *)malloc(sizeof(STU));
	if ( NULL == head )
	{
		printf("create fail\n");
		exit(0);
	}
	head->num = -1;
	head->score = -1;
	head->next = NULL;
	return head;
}
STU * insert(STU * head, STU * node)
{
	STU *p0;
	p0 = head->next;
	head->next = node;
	node->next = p0;
	return head;
}

STU * initnode(STU * node, int num , int score,STU * next)
{
	node->num = num;
	node->score = score;
	node->next = next;
	return node;
}
void print(STU *head)
{
	STU * p;
	if (head->next != NULL)
	{
		p =head -> next;
		do
		{
			printf("%d %d\n",p->num ,p->score);
			p = p->next;
		}
		while(p != NULL);
	}
	else
	{
		printf("the link is NULL\n");
	}
}
int main()
{
	STU * head = create();
	STU * stu1 = (STU * )malloc(sizeof(STU));
	stu1 = initnode(stu1, 1, 60, NULL);
	head = insert(head, stu1);
	STU * stu2 = (STU * )malloc(sizeof(STU));
	stu2 = initnode(stu2, 2, 80, NULL);
	head = insert(head, stu2);
	print(head);
	return 0;
}
