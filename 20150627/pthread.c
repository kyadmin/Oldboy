#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void* pthread_func(void* args)
{
	printf("hello world\n");
	sleep(10000);
	return NULL;
}

int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,pthread_func,NULL);
	void *ret = NULL;
	pthread_join(tid,&ret);
	return 0;
}
