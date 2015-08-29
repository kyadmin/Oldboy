#include <stdio.h>
#include <stdlib.h>

#include "ngx_list.h"

int main()
{
	ngx_list_t* list = ngx_list_create(10,sizeof(int));
	int i;
	for (i = 0; i < 100; i++) {
	int* p = (int*)ngx_list_push(list);
	*p = i*100;
	}

	ngx_list_node_t* data = &(list->head);
	for (i = 0;;i++) {
		if (i == list->ncap) {
		i = 0;
		data = data->next;
		if (data == NULL) {
		break;
	}
	}
	
	int j;
	for (j=0;j<data->ncur;j++) {
		int p = ((int*)data->data)[j];
		printf("%d\n",p);
	}
	}
	return 0;
}
