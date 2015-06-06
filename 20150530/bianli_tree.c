#include <stdio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node *lchild;
	struct node *rchild;
};

void init_btree(node *root)
{
	root->data = 'A';
	node * p1 =(node*)malloc(sizeof(node));
	p1->data = '+';
	root->lchild = p1;
	node * p2 = (node*)malloc(sizeof(node));
	p2->data = '*';
	p1->lchild = p2;
	node * p3 = (node*)malloc(sizeof(node));
	p3->data='/';
	p2->lchild = p3;
	node * p4 = (node*)malloc(sizeof(node));
	p4->data = 'O';p4->lchild = p4->rchild = NULL;
	p3->lchild = p4;
	node * q1 = (node*)malloc(sizeof(node));
	q1->data = 'G';q1->lchild = q1->rchild = NULL;
	root->rchild = q1;
	node * q2 = (node*)malloc(sizeof(node));
	q2->data = 'H';q2->lchild = q2->rchild = NULL;
        root->rchild = q2;
	node * q3 = (node*)malloc(sizeof(node));
        q3->data = 'I';q3->lchild = q3->rchild = NULL;
	root->rchild = q3;
        node * q4 = (node*)malloc(sizeof(node));
        q4->data = 'J';q3->lchild = q3->rchild = NULL;
	p3->rchild = q4;
	
}
void preorder(node *root)

{

        if(root != NULL) {

                printf("%c ", root->data);

                preorder(root->lchild);

                preorder(root->rchild);

        }

}
void inorder(node *root)

{

        if(root != NULL) {

                inorder(root->lchild);

                printf("%c ", root->data);

                inorder(root->rchild);

        }

}
void postorder(node *root)

{

        if(root != NULL) {

                postorder(root->lchild);

                postorder(root->rchild);

                printf("%c ", root->data);

        }

}

int main()

{

        node root;

        init_btree(&root);

        preorder(&root);

        printf("\n");

        inorder(&root);

        printf("\n");
	postorder(&root);

        printf("\n");

        return 0;

}
