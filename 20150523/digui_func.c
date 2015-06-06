#include <stdio.h>

int func(int *a,int m,int i,int j)
{
	if(i>=j)
	{
		return -1;
	}
	
	int flag = (i+j)/2+1;
	if(a[flag] > m)	{
		func(a,m,i,flag);
	}
	else if(a[flag]<m)
	{
		func(a,m,flag,j);
	}
	else
	{
		return flag;
	}

}

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9};
	int result=0;
	int i=0;
	int j=9;
	result=func(a,8,i,j);
	printf("%d\n",result);
	return 0;
}
