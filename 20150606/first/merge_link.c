#include <stdio.h>
#include <stdlib.h>

typedef struct merge {
	int number;
	struct merge* next;
}order;

int main()
{
	order* head = (order *)malloc(sizeof(order));	
	head->number = 1;
	head->next = NULL;
	int i = 0;
	order* tail = head;
	for (i=0;i<6;i++)
	{
		order* node = (order *)malloc(sizeof(order));
		int num;
		num = head->number;
		node->number = num+i*2;
		node->next = NULL;
		tail->next=node;
		tail=node;
			
	}

	//dierge 
	order* head1 = (order *)malloc(sizeof(order));
	head1->number = 2;
	head1->next = NULL;
	tail=head1;
	for (i=0;i<6;i++) 
	{
                order* node = (order *)malloc(sizeof(order));
		int num;
                num = head1->number;
                node->number = (num+i)*2;
                node->next = NULL;
                tail->next=node;
                tail=node;
                  
        }

	order* p1 = head;
	order* p2 = head1;
	while (p1 != NULL && p2 != NULL)
	{
		printf("%d-%d\n",p1->number,p2->number);
		p1 = p1->next;
		p2 = p2->next;
	}
		
}




