#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int* a = (int*)malloc(sizeof(int)); //分配一个int的长度
	int* a = (int*)malloc(sizeof(int)*100); //分配一个int的长度
	*a = 100;
	printf("%p %d\n",a,*a);
	return 0;
}
