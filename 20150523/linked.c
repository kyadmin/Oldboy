#include <stdio.h>
#include <stdlib.h>

typedef struct stu{
	int id;
	int total;
	struct stu * next;
}STU;

int Createlk( int n)
{
	STU *head = (STU *)malloc(sizeof(STU));
	if (head == NULL)
	{
		printf("malloc error\n");
		return -1;
	}
	STU *p = head;
	int num = 1;
	while ( n != 0 )
	{
		p->next = (STU *)malloc(sizeof(STU));
		p->next->id = num;
		p->next->total = num*20;
		printf("p->id:%d,p->total:%d\n",p->id, p->total);
		num ++;
		n--;
		if (n == 0)
		{
			p->next->next = NULL;
		}
		else
		{
			p= p->next;
		}
	}
	STU *p1 =head;
	STU *tmp;
	while (p1->next != NULL)
	{
		printf("NO:%d;cout:%d\n",p1->id,p1->total);
		tmp=p1;
		p1=p1->next;
		free(tmp);
	}
}
int main()
{
	int num = 3;
	int res = Createlk( num);
	if (res == -1)
	{
		printf("error when call Createlk\n");
		return -1;
	}
	return 0;
}
