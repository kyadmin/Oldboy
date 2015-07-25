#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int convert_upper(char* buf)
{
	int len = strlen(buf);
	int i = 0;
	for (i = 0; i < len; i++) {
		if (buf[i] >= 'a' && buf[i] <= 'z') {
			buf[i] = buf[i] - ('a' - 'A');
		}
	}

	return 0;
}

int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("please input filename\n");
		return -1;
	}

	char* filename = argv[1];
	FILE* fp = fopen(filename, "r+");
	if (fp == NULL) {
		printf("open file %s failed, err:%s\n", filename, strerror(errno));
		return -2;
	}
	char buf[81920];
	char* p = fgets(buf, sizeof(buf), fp);
	while (p) {
		convert_upper(buf);	
		fseek(fp, -strlen(buf) ,SEEK_CUR);	
		fprintf(fp, "%s", buf);
		p = fgets(buf, sizeof(buf), fp);
	}

	fclose(fp);
	sleep(10000);
	return 0;	
}
