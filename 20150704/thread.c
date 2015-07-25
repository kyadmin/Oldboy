#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int g_count = 0;
pthread_mutex_t g_mutex;

void* pthread_func(void* args)
{
	pthread_mutex_lock(&g_mutex);
	g_count +=1;
	printf("cur:%d\n",g_count);
	pthread_mutex_unlock(&g_mutex);

	return NULL;
}

int main()
{
	pthread_mutex_init(&g_mutex,NULL);
	pthread_t pid[100];
	int i = 0;
	int count = 10;
	for (i = 0;i < 10;i++) {
		pthread_create(&pid[i],NULL,pthread_func,NULL);
	}

	for (i = 0;i < count;i++) {
		void* retval = NULL;
		pthread_join(pid[i],&retval);
	}
	printf("g_count=%d\n",g_count);
	pthread_mutex_destroy(&g_mutex);
	return 0;
}
