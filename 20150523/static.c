#include <stdio.h>


int main()
{
	int i=0;
	for (i=0;i<=2;i++)
	{
		static int x=1;
		x++;
		printf("x=%d\n",x);
	}
return 0;
}
