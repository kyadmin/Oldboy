#include <stdio.h>

typedef struct stu{
	int num;
	int score;
	struct stu * next;

};

struct stu *insert(struct stu *head,struct stu *stud)
{
	struct stu *p0,*p1,*p2;
	p1 = head;
	p0 = stud;
	if(head==NULL)
	{
	head=p0;
	p0->next=NULL;
	}
	else
	{
		while ((p0->num > p1->num)&&(p1->next != NULL))
		{
		p2=p1;
		p1=p1->next;
		}
		if(p0->num <= p1->num)
		{
		if(head==p1)
			head=p0;
		else
			p2->next = p0;
		p0->next = p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}
n=n+1;
return (head);
}

struct student *create(void)
{
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	if (p1==NULL || p2==NULL)
	{
		printf("malloc fail in create lk\n");
		exit(0);
	}
	if (scanf("%d %f",&p1->num,&p1->score) != 2)
	{
		printf("input error\n");
		exit(0);
	}
	head=NULL;
	while(p1->num!=-1)
	{
	n=n+1;
	if(n==1)
		head=p1;
	else
		p2->next=p1;
	p2=p1;
	p1=(struct student *)malloc(LEN);
	if (p1==NULL)
	{
		printf("malloc fail in create lk\n");
		exit(0);
	}
	if (scanf("%d  %f",&p1->num,&p1->score) != 2)
}
}
