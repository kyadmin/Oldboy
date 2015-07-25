#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

sem_t sem;
sem_t full;
pthread_mutex_t index_lock;

int data[10];
int g_index = 0;

void* produce_func(void* args)
{
	while (1) {
		sem_wait(&full);
		pthread_mutex_lock(&index_lock);
		data[g_index] = rand();
		g_index++;
		pthread_mutex_unlock(&index_lock);
		sem_post(&sem);
		}
	return NULL;
}

void* consume_func(void* args)
{
	while (1) {
		sem_wait(&sem);
		pthread_mutex_lock(&index_lock);
		printf("consume %d\n",data[g_index-1]);
		g_index--;
		pthread_mutex_unlock(&index_lock);
		sem_post(&full);
	}
	return NULL;
}

int main()
{
	sem_init(&sem,0,0);
	sem_init(&full,0,10);
	
	pthread_mutex_init(&index_lock,NULL);

	pthread_t produce;
	pthread_t consume;
	
	pthread_create(&produce,NULL,produce_func,NULL);
	pthread_create(&consume,NULL,consume_func,NULL);

	pthread_join(produce,NULL);
	pthread_join(consume,NULL);

	pthread_mutex_destroy(&index_lock);
	return 0;
}
