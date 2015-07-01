#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE* fp = fopen("./history.txt", "a+");
        if(fp == NULL)
	{
		printf("the file opened failed,err:%s\n",strerror(errno));
		return -1;
	}

	int count =100;
	int i = 0;
	for (i=0;i<100;i++)
	{
	fprintf(fp,"%d",i);
	}
	printf("run here\n");
	sleep (5);
	fflush(fp);
	fclose(fp);
}
