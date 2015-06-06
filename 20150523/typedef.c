#include <stdio.h>

typedef int * POINT;

int main()
{
	POINT p1,p2;
	int * p3,p4;
	int a=1;
	int b=2;
	p1=&a;
	p2=&b;
	p3=&a;
	p4=b;	
	printf("p1=%d\np2=%p\np3=%p\np4=%p\n",*p1,p2,p3,p4);
}
