#include <stdio.h>

int main()
{
	int i=0;
	int j=0;
	for(i=0;i<25;i++)
		{
		for(j=0;j<25;j++)
		{
			printf("%d,%d,%d\n",i,j,(50-i-j));
		}	
		}
return 0;
}
