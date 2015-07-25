#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int main(int argc, char** argv)
{
	if (argc != 2) {
		printf("please input filename\n");
		return -1;
	}

	char* filename = argv[1];
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("open file %s failed, err:%s\n", filename, strerror(errno));
		return -2;
	}

	char out_filename[256];
	sprintf(out_filename, "%s.upper", filename);

	FILE* out = fopen(out_filename, "a");
	if (out == NULL) {
		printf("open file %s failed, err:%s\n", out_filename, strerror(errno));
		fclose(fp);
		return -2;
	}

	char buf[81920];
	char* p = fgets(buf, sizeof(buf), fp);
	while (p) {
		convert_upper(buf);	
		fprintf(out, "%s", buf);
		p = fgets(buf, sizeof(buf), fp);
	}

	fclose(out);
	fclose(fp);
	return 0;	
}
