#include <stdio.h>
#include <omp.h>

int main()
{
	int i;
	int cores = omp_get_num_procs();
	printf("The number of the physical CPU: %d",cores);
	#pragma omp parallel for
	for(i=0;i<10;i++)
	{
		printf("i=%d\n",i);
	}
	return 0;
}
