#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
	int num;
	struct tree * lchild;
	struct tree * rchild;
}TREE;

TREE* insert(TREE* tr,TREE* node)
{
	if(tr == NULL)
	{
		return node;
	}
	if((node->num > tr->num))
	{
		tr->rchild = insert(tr->rchild,node);
	}
	else if (node->num < tr->num)
	{
		tr->lchild = insert(tr->rchild,node);
	}
	else
	{
		printf("this num hae been init");
	}
	return tr;
}

void print(TREE* tr,int layer)
{
        if(tr == NULL)
        {
                return 0;
        }
        print(tr->rchild,layer+3);
        int i;
        for (i=0;i<layer;i++)
        {
                printf(" ");
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
        	printf("rand num: %d\n",tmp->num);
        	tmp->lchild = NULL;
        	tmp->rchild = NULL;
        	print(root,tmp);
	}

}
