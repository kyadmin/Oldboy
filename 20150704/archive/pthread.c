#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int g_notify_exit = 0;

void* pthread_func(void* args)
{
	int* p = (int*)args;
	while (1) {
		if (g_notify_exit) {
			break;
		}	
		printf("processing request%d\n", rand());
		sleep(1);
	}

	return NULL;
}

int main()
{
        pthread_t tid[10];
	int i = 0;
	int count = 10;
	for (i = 0; i < 10; i++) {
		int* ptr = (int*)malloc(sizeof(int));
		*ptr = i;
		pthread_create(&tid[i], NULL, pthread_func, ptr);
	}	

	while (1) {
		printf("please input select\n");
		printf("1. run\n");
		printf("2. exit\n");
		int ret;
		scanf("%d", &ret);
		if (ret == 2) {
			g_notify_exit = 1;
			break;
		}
	}

	void* ret;
	for (i = 0; i < 10 ;i++ ){
		pthread_join(tid[i], &ret);
	}
	return 0;
}

