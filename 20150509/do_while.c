#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	do
	{
	sleep(1);
	i++;
	if(5 == i)
	{
		printf("This step will be past\n");
		continue;
	}
	printf("while.....i==%d\n",i);
	if(8 == i)
	{
		goto test1;
	}
	if(10 == i)
	{
		break;
	}
	}while(0==j);
	return 0;
test1:
	printf("You have enter goto section!!!\n");
}
