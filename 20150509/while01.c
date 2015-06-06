#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	while(0==j)
	{
	sleep(1);
	i++;
	if(5 == i)
	{
		printf("This step will be past\n");
		continue;
	}
	printf("while.....i==%d\n",i);
	if(10 == i)
	{
		break;
	}
	}
	return 0;
}
