#include <stdio.h>

int main()
{
	int a[3][3]={1,2,3,1,2,3,1,2,3};
	int b[3][3]={1,1,1,2,2,2,3,3,3};
	int c[][];

	int i=0;
	int j=0;
	int k=0;
	int tmp;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			for (k=0;k<3;k++)
			tmp += a[i][k]*b[k][j];
		c[i][j] = tmp;
		tmp=0;
		}
	}
return 0;
	
}
