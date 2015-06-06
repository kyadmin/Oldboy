#include <stdio.h>

int main(int argc,char * argv[])
{
	if (argc != 3)
	{
		printf("miss some argv\n");
		return -1;
	}
	while (argc != 0)
	{
		printf("参数 %d :%s\n",argc,argv[argc-1]);
		argc --;
	}
	return 0;
}
