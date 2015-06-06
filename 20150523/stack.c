#include <stdio.h>
#include <stdlib.h>
#pragma pack(8)

int main()
{
	volatile int a[10]={1,2,3,4,5,6,7,8,9,10};
	volatile int b[4]={1,2,3,4};
	static int c=6;
	printf("stack:&a=%p;&b=%p\n",a,b);
	int i=0;
	int *p1=(int *)malloc(5*sizeof(int));
	for (i=0;i<5;i++)
	{
		p1[i]=i+1;
	}
	int *p=(int *)malloc(5*sizeof(int));
	for (i=0;i<5;i++)
		{
		p[i]=i;
	}
	printf("heap:p=%p;p1=%p\n",p,p1); //int类型为4个byte,所以p1比p的地址小20(4*5)
	printf("static:&c=%p\n",&c);
	free(p1);
	free(p);
}
