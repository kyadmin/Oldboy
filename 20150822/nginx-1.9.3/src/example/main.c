#include <stdio.h>
#include <stdlib.h>

typedef struct {
	void 	*data;
	unsigned int ncap;
	size_t	size;
	unsigned int ncur;
} ngx_array_t;

ngx_arrat_t *ngx_array_create(unsigned int n, size_t size);
void ngx_array_destroy(ngx_array_t *);
void *ngx_array_push(ngx_array_t *a);
void *ngx_array_push_n(ngx_array_t *a, unsigned int n);


static inline int 
ngx_array_init(ngx_array_t *array,unsigned int n, size_t size)
{
	array->ncur = 0;
	array->size = size;
	array->ncap = n;

	array->data = malloc(n * size);
	if (array->data == NULL) {
		return -1;
	}
	return 0;
}
