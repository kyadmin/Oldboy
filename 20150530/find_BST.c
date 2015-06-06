#include <stdio.h>

typedef struct tree{
	int num;
	struct tree * lchild;
	struct tree * rchild;
}TREE;

TREE * insert(TREE * tr,TREE *node)
{
	if (tr == NULL)
	{
		return node;
	}
	if(node->num > tr->num)
	{
		tr->rchild = insert(tr->rchild,node);
	}
	else if ((node->num < tr->num))
	{
		tr->lchild = insert(tr->lchild,node);
	}
	else
	{
		printf("The number before the tree");
	}
	return tr;
}
/*
void print(TREE * tr,int layer)
{
	if(tr == NULL)
	{
		return ;
	}
	print(tr->rchild,layer+3);
	int i;	
	for (i=0;i<layer;i++)
	{
		printf(" ");
	}
	printf("%d\n",tr->num);
	printf(tr->lchild,layer+3);
}
*/

void find(TREE * tr, TREE * node)
{
	if (tr == NULL)
	{
		printf("tree is NULL\n");
		exit(0);
	}
	if(node->num > tr->num)
	{
		printf("find rood num: %d\n",tr->num);
		if (tr->rchild != NULL)
		{
			find(tr->rchild,node);
		}
		else
		{
			printf("not find num \n");
		}
	
	}
	else if(node->num < tr->num)
	{
		printf("find rood num: %d\n",tr->num);
		if (tr->lchild != NULL)
		{
			find(tr->lchild,node);
		}
		else
		{
			printf("not find num \n");
		}
	}
	else
	{
		printf("find the num is: %d\n",tr->num)
	}
}

main()
{
int layer = 0;
srand(time(NULL));
TREE * root = (TREE *)malloc(sizeof(TREE));
if (root == NULL)
{
	printf("malloc error\n");
	return -1;
}
root->num = rand()%100;
root->rchild = NULL;
root->lchild = NULL;
printf("root num: %d\n",root->num);
int i=0;
int delnode;
TREE * tmp;
for (i=0;i<10;i++)
{
	tmp=(TREE *)malloc(sizeof(TREE));
	if (NULL == tmp)
	{
		printf("malloc failed \n");
		return -1;
	}
	tmp->num = rand()%100;
	//printf("rand num: %d\n",tmp->num);
	tmp->lchild = NULL;
	tmp->rchild = NULL;
	find(root,tmp);
}
}
