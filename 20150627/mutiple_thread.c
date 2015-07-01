#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void* pthread_func(void* args)
{
	int* p = (int*)args;
	printf("hello world %d\n",*p);
	sleep(10000);
	return NULL;
}

int main()
{
	pthread_t tid[10];
	int i = 0;
	int count = 10;
	for (i = 0;i<10;i++) {
		int* ptr = (int*)malloc(sizeof(int));
		*ptr = i;
		pthread_create(&tid[i],NULL,pthread_func,ptr);
	}

	void *ret = NULL;
	for (i=0;i<10;i++)
	{
		pthread_join(tid,&ret);
	}
	return 0;
}
