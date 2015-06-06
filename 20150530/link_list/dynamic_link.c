#include <stdio.h>
#include <stdlib.h>
#define null 0
#define len sizeof(struct student)

struct student
{
	long num;
	float score;
	struct student *next;
};

int n;
struct student *create(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(len);
	scanf("%ld,%f",&p1->num,&p1->score);
	head=null;
	while(p1->num!=0)
	{
	n=n+1;
	if(n==1)head=p1;
	else p2->next=p1;
	p2=p1;
	p1=(struct student *)malloc(len);
	scanf("%ld,%f",&p1->num,&p1->score);
	}
	p2->next=null;
	return(head);
}

void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=null)
	do
	{
		printf("%ld%f\n",p->num,p->score);
		p=p->next;
	}while(p!=null);
}

struct student *del(student *head,long num)
{
	struct student *p1,*p2;
	if(head==null) cout<<"nlist null"<<endl;
	p1=head;
	while(num!=p1->&&p1->next!=null)
	{p2=p1;p1=p1->next;}
	if(num==p1->num)
		{if(p1==head) head=p1->next;
		else p2->next=p1->next;
		printf("ld",num);
		n=n-1;
		}
	else
		cont<<"Not been found"<<num<<endl;
		return(head);
}

void main()
{
	struct student *head,stu;
	long del_num;
	cout<<"input records:"<<endl;
	head=create();
	print(head);
	cout<<"input the delete number"<<endl;
	cin>>del_num;
}
