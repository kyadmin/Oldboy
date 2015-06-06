#include <stdio.h>

main()
{
int a[10] = {3,2,1,4,5,6,7,8,9,10};

	int *p = a;
	int i;
	int tmp = 100;  //最小数
	int tmp1 = 0; //临时变量
	int xiabiao = 0; //最小数的下标

	for (i=0; i<10; i++)
	{
		if (p[i] < tmp)
		{
			tmp = p[i];
			xiabiao = i;
			printf("%d\n", p[i]);
		}
	}
		printf("%d %d\n", tmp, xiabiao);
		tmp1 = p[0]; //3
		p[0] = tmp;  //1
		p[xiabiao] = tmp1; //2

		for (i=0; i<10; i++)
		{
			printf("%d\n", p[i]);
		}
}
