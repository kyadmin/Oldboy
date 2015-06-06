#include <stdio.h>
#include <stdlib.h>

struct monkey {
	int num;
	struct monkey* next;
};

int main()
{
	struct monkey* head = (struct monkey *)malloc(sizeof(struct monkey));
	int i = 0;
	int number = 1;
	head->num = number;
        number++;
       
	struct monkey* tail = head;
	for (i=0;i<14;i++)
	{
		struct monkey* node=(struct monkey *)malloc(sizeof(struct monkey));
		node->num = number;
		number++;
		node->next = NULL;
		tail->next = node;
		tail = node;	
	}
	
	tail->next = head;

	struct monkey* tmp = head;
	while (1)
	{
		printf("%d\n",tmp->num);
		tmp = tmp->next;
		if (tmp == head) {
			break;
		}
	}

	
	int j = 1;
	struct monkey* p = head;
	struct monkey* prev = head;
	while (1) {
		prev = p;
		p = p->next;
		j++;
		if (j == 3) {	
			if (p->next == p) {
				printf("result:%d\n", p->num);
				break;
			}
			prev->next = p->next;
			p = p->next;
			j=1;
		}			
	}

	return 0;			
}
