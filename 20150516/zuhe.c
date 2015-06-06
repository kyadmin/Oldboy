#include <stdio.h>

int main()
{
	int a;
	int b;
	int i;
	for (a=0;a<50;a++)
	{
		for (b=0;b<50;b++)
		{
			i=a+b;
			if (i==50)
				printf("A is %d,B is %d\n",a,b);
		}
	}
return 0;
}
