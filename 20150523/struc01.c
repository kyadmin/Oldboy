#include <stdio.h>

struct A{
	int a;
	char c;
	short b;
};
struct B{
	char c;
	int a;
	short b;
};

int main()
{
	struct A Aobject;
	struct B Cobject;
	printf("sizeof A %d,sizeof B %d\n",sizeof(Aobject),sizeof(Cobject));
}
