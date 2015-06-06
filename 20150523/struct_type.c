#include <stdio.h>

struct B{
	unsigned a:3;
	unsigned b:9;
	unsigned c:4;
	
}test;

int main()
{
	test.a=0x2;
	test.b=0xff;
	test.c=0xdd;
	printf("test.a is %d\ntest.b is %d\ntest.c is %d\n",test.a,test.b,test.c);
return 0;
}
