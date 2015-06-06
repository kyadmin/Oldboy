#include <stdio.h>
int main()
{
	int i=0;
	int local = 0;
	int tmp;
	int a[10];
	for (i=0;i<10;i++)
	{
		if(scanf("%d",&a[i])==0)
			break;
		if (i == 0)
			tmp = a[0];
		if (tmp >= a[i])
		{
			tmp = a[i];
			local = i;
		}
	}
	i = a[local];
	a[local] = a[0];
	a[0] = i;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
