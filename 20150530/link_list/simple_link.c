#include <stdio.h>
#include <stdlib.h>
#define null 0

struct student 
{
	long num;
	float score;
	struct student * next;
}

main()
{
	struct student a,b,c,*head,*p;
	a.num=99101;
	a.score=89.5;
	b.num=99103;
	b.score=90;
	c.num=99107;
	c.score=85;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=null;
	p=head;
	do
	{
	//	cout<<p->num<<p-score;
		p=p->next;
		printf("Result is %p\n",p);
	}
	while(p!=null);

}
