#include <stdio.h>

//联合体表示几个变量公用一个内存位置，在不同的时间保存不同的数据类型和不同长度的变量.
union A {
	short a;
	int b;
};

int main()
{
	union A test;
	test.b=0xfffff;
	test.a=0x1;
	printf("%x\n",test.b);
	//printf("%x\n",test.a);
	return 0;
}
