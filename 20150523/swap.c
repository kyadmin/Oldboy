#include <stdio.h>

int swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
	printf("a=%d,b=%d\n",a,b);
	return 0;

}

int main(void)
{
	int a=1;
	int b=2;
	int res=swap(a,b);
	if (res == 0) 
		printf("a=%d,b=%d\n",a,b);
        return 0;
}
