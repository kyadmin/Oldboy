#include <stdio.h>

int main()
{
	const int size=5;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i;
	int sum1,sum2;
	for (i=0;i<3;i++)
	{
		sum1 += a[i][i];
	}
	printf("sum1=%d\n",sum1);
	for (i=0;i<3;i++)
	{
		sum2 += a[3-i-1][i];
		printf("a=%d\n",a[3-i-1][i]);
	}
	printf("sum2=%d\n",sum2);
return 0;
}
