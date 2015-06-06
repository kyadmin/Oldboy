#include <stdio.h>

int main()
{
	int i =1;
	//if ( 1 == i )
	if ( 0 == i )
	{
		printf("i==0\n");
		printf("Just make a test\n");
	}
	else
	{
		printf("i=%d\n",i);
		//return 0; //如果此处加上return,则不会执行后边的代码
	}
	printf("1111111\n");
	return 0;
}
