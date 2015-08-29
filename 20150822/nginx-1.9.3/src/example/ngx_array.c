#define NGX_OK 0

#include <stdlib.h>
#include <string.h>
#include "ngx_array.h"

ngx_array_t *
ngx_array_create(unsigned int n, size_t size)
{
	ngx_array_t *a;

	a = malloc(sizeof(ngx_array_t));
	if (a == NULL) {
		return NULL;
	}
	if (ngx_array_init(a,n,size) != NGX_OK) {
		return NULL;
	}
	return a;
}

void ngx_array_destroy(ngx_array_t *a)
{
	free(a->data);
	free(a);
}

void * ngx_array_push(ngx_array_t *a)
{
	void	*item, *new;
	size_t  size;

	new = malloc(2 * size);
	if (new == NULL) {
		return NULL;
	}

	memcpy(new, a->data, size);
	free(a->data);

	a->data = new;
	a->ncap *= 2;

	item = (char *) a->data + a->size * a->ncur;
	a->ncur++;

	return item;
}
