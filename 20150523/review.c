#include <stdio.h>

int main()
{
	int m=1,n=2,*p=&m,*q=&n,*r;
	r=p;
	p=q;
	q=r;
	printf("m=%d,n=%d,p=%d,q=%d\n",m,n,*p,*q);
return 0;
}
