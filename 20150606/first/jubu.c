#include <stdio.h>

int* tmp()
{
	int a = 100;
	return &a;
}

main()
{
	int* p = tmp();
	*p = 10000;
	printf("p=%d\n",*p);
	return 0;
}
