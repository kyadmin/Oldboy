#include <stdio.h>
#include <stdlib.h>

typedef struct str {
	int id;
	struct str* next;
}num;

int main()
{
	int i = 1;
	num* head = (num *)malloc(sizeof(num));	
	head->id = i;
	head->next = NULL;
	i++;

	int j = 1;
	for (i=1;i<6;i++)
	{
		num* node = (num *)malloc(sizeof(num));
		node->id = i;
		node->next = NULL;
		printf("the num is %d\n",node->id);
		node->next=head;
		head = node;
	}
	num* tmp = head;
	while (tmp != NULL)
	{
		printf("print %d\n",tmp->id);
		tmp=tmp->next;
	}
return 0;	
	
}
