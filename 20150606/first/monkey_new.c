#include <stdio.h>
#include <stdlib.h>

typedef struct monkey {
	int num;
	struct monkey* next;
}M;

int main()
{
	int number = 1;
	//struct monkey* head = (struct monkey)malloc(sizeof(struct monkey))
	M* head = (M *)malloc(sizeof(M));
	head->num = number;
	head->next = NULL;
	number++;
	
	M* tail = head;
	int i = 0;
	
	for (i = 0;i<14;i++) {
		M* node = (M*)malloc(sizeof(M));
		node->num = number;
		node->next = NULL;
		number++;
		
		tail->next = node;
		tail = node;
	}
	tail->next = head;
	M* p = head;
	M* prev = head;
	int current_number = 1;

	while (p->next != p) {
		if (current_number == 3) {
		int out_num = p->num;
		prev->next = p->next;
		current_number = 1;
		p = prev->next;
		printf("M number=%d out\n",out_num);
		}
		else {
		prev = p;
		p = p->next;
		current_number++;
		}
	}
	printf("king of monkey=%d\n",p->num);
	return 0;
}
