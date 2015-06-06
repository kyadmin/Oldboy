#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	char a[5]={'H','E','L','L','O'};
	for (i=0;i<5;i++)
	{
	if (a[i]>=65 && a[i]<=90)
		{
		a[i]=a[i]+32;
		printf("%c",a[i]);
		printf("\n");
		printf("%d\n",a[i]);
		}
	}
return 0;
}
