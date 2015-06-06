#include <stdio.h>
#include <stdlib.h>

struct stack 
{
	int a;
	short b;
	struct stack *p;
};

int main()
{
	struct stack *head=(struct stack *)malloc(sizeof(struct stack));
	if (head == NULL)
	{
		printf("malloc failed\n");
		return -1;
	}
	head->a=1;
	head->b=1;
	
	
}
