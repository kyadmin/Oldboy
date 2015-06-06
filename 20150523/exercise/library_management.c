#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct Library
{
	unsigned int num;
	unsigned int price;
	char title[20];
	char author[10];
	struct Library *next;
};

struct Library *head = NULL;
unsigned int kg = 0;

void display();
struct Library *insert();
//struct Library *show();
void search(struct Library *head,unsigned int num);
void Library *del(struct Library *head);
void modify(struct Library *head);
void storage(struct Library *head);

void display()
{
    int n,z=1,k=0;
    char cho;
    do
    {
    printf("***************图书信息管理系统****************\n");
    printf("*                                             *\n");
    printf("*	1. 录入新图书			      *\n");
    printf("*	2. 显示所有图书			      *\n");
    printf("*	3. 图书搜索			      *\n");
    printf("*	4. 图书删除			      *\n");
    printf("*	5. 图书编辑			      *\n");
    printf("*	6. 保存到磁盘			      *\n");
    printf("*	7. 退出                               *\n");
    printf("*                                             *\n");
    printf("***********************************************\n");
    printf("请输入序号:");
    while(!scanf("%d",&n));
	{
		printf("输入序号有误，请重新输入");
		fflush(stdin);
	}
	printf("\n");

    while((n<0 || n>7))
	{
		printf("抱歉，没有此功能，请重新输入功能序号:");
		fflush(stdin);
		while(!scanf("%d",&n))
		{
			printf("输入序号有误，请重新输入");
			fflush(stdin);
		}
	printf("\n");
		
	}

    switch(n)
    {
	case 1:
	{
	head = insert(head,NULL);
	k = 1;
	printf("录入新图书");
	system("pause");
	break;
	}
	case 2:
	{
	head = show(head);
	k = 1;
	printf("显示所有图书");
	system("pause");
	break;
	}
	case 3:
	{
	head = search(head,NULL);
	k = 1;
	printf("图书搜索");
	system("pause");
	break;
	}
	case 4:
	{
		head = del(head);
		k = 1;
		printf("图书删除");
		system("pause");
		break;
	}
	case 5:
	{
	modify(head);
	break;
	}
	case 6:
	{
	k = 0;
	storage(head);
	printf("保存到磁盘");
	break;
	}
	case 7:
	{
	printf("  ");
	break;
	}

}
}while(z == 1);
}

//录入新图书
struct Library *insert(struct Library *head,struct Library *books)
{

}
//显示所有图书
//struct Library *show()
//{

//}
//图书搜索
struct search(struct *head,unsigned int num)
{

}
//图书删除
struct Library *del(struct Library *head)
{

}
//图书编辑
struct modify(struct Library *head)
{

}
//保存到磁盘
struct storage(struct Library *head)
{

}

void main()
{
	display();
}
