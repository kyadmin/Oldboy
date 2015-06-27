#include <stdio.h>
#include <stdlib.h>

typedef struct stu {
	int id;
	struct stu* next;
}num;

int main()
{
	int i = 1;
	num* head = (num *)malloc(sizeof(num));	
	head->id = i;
	head->next = NULL;
	i++;
	
	int j;
	for (i=1;i<6;i++)
	{
		num* node = (num *)malloc(sizeof(num));
		node->id = i;
		node->next = NULL;
		//printf("the num is %d\n",node->id);
		node->next=head;
		head = node;
	}


	num* p=head;
	p = head->next;
	num* reverse_head = head;
	while (p != NULL) {
		num* tmp = p->next;
		p->next = reverse_head;
		reverse_head = p;
		p = tmp;
	}
	
	head->next = NULL;
	p = reverse_head;
	while (tmp != NULL)
	{
		printf("print %d\n",tmp->id);
		p=p->next;
	}
return 0;	
	
}

