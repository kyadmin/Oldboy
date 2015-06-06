#include <stdio.h>

int main()
{
	int i = 0;
	printf("Please chose the number:");
	scanf("i=%d",&i);
	//printf("i=%d\n",i);
	srand(time(NULL)); //不可以指定范围,初始化时的一个随机值
	int r=rand()%30;
	if (i == r)
	{
		printf("Congratulations!\n");
	}
	else
	{
		printf("Sorry for hear that\n");
	}
	printf("%d\n",r);
	return 0;
}
