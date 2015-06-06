#include <stdio.h>

struct student 
{
	int num;
	float score;
	struct student *next;
};

void main()
{
	struct student a,b,c;
	a.num=01;
	a.score=90;
	b.num=02;
	b.score=99;
	c.num=03;
	c.score=98;
	printf("\n A is %d\n B is %d\n C is %d\n",a.num,b.num.c.num);
	printf("\n A is %d\n B is %d\n C is %d\n",a.score,b.score.c.score);
return 0;
}
