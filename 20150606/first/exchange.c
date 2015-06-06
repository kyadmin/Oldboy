#include <stdio.h>

void func(int* p1,int* p2)
{
	int tmp;
	printf("p1=%p ",p1);
	printf("p2=%p \n",p2);
	printf("p1=%d ",*p1);
	printf("p2=%d\n",*p2);
	//After exchange
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("p1=%d\n",*p1);
	printf("p2=%d\n",*p2);
}

int main()
{
	int x=11;
	int y=291;
	func(&x,&y);
return 0;
}
