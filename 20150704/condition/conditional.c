#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int g_sale_count = 0;
int g_notify_boat = 0;
pthread_cond_t g_condition;
pthread_mutex_t g_mutex;

void* sale_func(void* args)
{
	while (1) {
		pthread_mutex_lock(&g_mutex);
		if (g_sale_count == 10) {
			pthread_cond_signal(&g_condition);
			pthread_mutex_unlock(&g_mutex);
			continue;
	}
	g_sale_count++;
	printf("sale count:%d\n", g_sale_count);
	pthread_mutex_unlock(&g_mutex);
	sleep(1);
	}
}

void* boat_func(void* args)
{
	pthread_mutex_lock(&g_mutex);
	pthread_cond_wait(&g_condition,&g_mutex);
	printf("running boat\n");
	pthread_mutex_unlock(&g_mutex);
}

int main()
{
	pthread_t sale;
	pthread_t boat;

	pthread_cond_init(&g_condition,NULL);
	pthread_mutex_init(&g_mutex,NULL);

	pthread_create(&sale,NULL,sale_func,NULL);
	pthread_create(&boat,NULL,boat_func,NULL);

	pthread_join(sale,NULL);	
	pthread_join(boat,NULL);

	pthread_cond_destroy(&g_condition);
	pthread_mutex_destroy(&g_mutex);

	return 0;
}
