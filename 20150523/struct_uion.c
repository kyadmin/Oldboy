#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct A{
	int a;
	char b[30];
	char c[20];
};

int main()
{
	struct A *test=(struct A *)malloc(sizeof(struct A));
	if (test == NULL)
	{
		printf("malloc error\n");
		return 0;
	}
	test->a = 20;
	strncpy(test->b,"hello",sizeof(test->b));
	strncpy(test->c,"world",sizeof(test->c));
	printf("%s,%s",test->b,test->c);
return 0;
}
