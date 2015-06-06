#include <stdio.h>

void main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p;
	for (p=a[0];p<a[0]+12;p++)
		printf("%d\n",*p);
	printf("\n");
}
