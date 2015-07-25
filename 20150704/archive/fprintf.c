#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* fp = fopen("./test.log", "a+");
	if (fp == NULL) {
		printf("open failed, err:%s\n", strerror(errno));
		return -1;
	}

	int count =100;
	int i = 0;
	for ( i = 0; i < 100; i++) {
		fprintf(fp, "%d", i);
	}

	printf("run here\n");
	sleep(5);
	printf("after run here\n");
	fflush(fp);
	
	fclose(fp);
	
}
