#include <stdio.h>

int main()
{
	int i = 1;
	int j = i++;  // j第一次为1，第二次再加i
	printf("j = %d\n i = %d \n",j,i);
	int n = 1;
	int m = ++n; // n在赋值给m之前，先做运算n+n,然后将结果赋值给m
	printf("n = %d \n m = %d \n",n,m);
	return 0;
}
