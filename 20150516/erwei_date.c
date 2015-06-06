#include <stdio.h>

int main()
{
	//int a[2][3]={{1,2,3},{4,5,6}};
	int a[2][3]={1,2,3,4,5,6};
	int i=0;
	int j=0;
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("The result is a[%d][%d]=%d\n",i,j,a[i][j]);
		}
		printf("\n");
	}
return 0;
}
