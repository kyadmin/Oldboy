#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

int g_count = 0;
pthread_spinlock_t g_spin;

void* pthread_func(void* args)
{
	while (1) {
		pthread_spin_lock(&g_spin);
		g_count += 1;
		printf("cur:%d\n",g_count);
		pthread_spin_unlock(&g_spin);
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_spin_init(&g_spin,0);
	pthread_t pid[100];
	int i = 0;
	int count = 10;
	for (i = 0;i < count; i++) {
		pthread_create(&pid[i],NULL,pthread_func,NULL);
	}

	for (i = 0;i<count;i++) {
		void* retval = NULL;
		pthread_join(pid[i],&retval);
	}
	printf("g_count=%d\n",g_count);
	pthread_spin_destroy(&g_spin);

	return 0;
}
