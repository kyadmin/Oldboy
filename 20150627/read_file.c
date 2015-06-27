#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("dddel.txt","r");
	if (fp == NULL)
	{
		printf("Open file failed,err:%s\n",strerror(errno));
		exit(-1);
	}
	fclose(fp);
	return 0;
}
