#include <stdio.h>

int main()
{
	int a=3;
	int *p=&a;
	printf("p=%p;the address is %d\n",p,*p);
	return 0;
}
