#include <stdio.h>
#include <omp.h>

int main(){
	int i;
	int cores = omp_get_num_procs();
	printf("cpu cores is :%d\n",cores);
	#pragma omp parallel for
	for(i=0;i<10;i++){
		printf("i=%d\n",i);
		printf("threads NO.:%d\n",omp_get_num_threads());
		sleep(2);
	}
	return 0;
}
