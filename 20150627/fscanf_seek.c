#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* stream;
	long l;
	float fp;
	char s[81];
	char c;
	stream = fopen("scanf.txt","w+");
	if(stream == NULL)
	{
		printf("the file opened failed\n");
	}
	else
	{
		fprintf(stream,"%s %d %f %c","a_string",6500,3.1415,'x');
		fseek(stream,0L,SEEK_SET);
		fscanf(stream,"%s",s);
		printf("%ld\n",ftell(stream));
		fscanf(stream,"%ld",&l);
		printf("%ld\n",ftell(stream));
		fscanf(stream,"%f",&fp);
                printf("%ld\n",ftell(stream));
                fscanf(stream,"%c",&c);
                printf("%ld\n",ftell(stream));
		rewind(stream);
		fscanf(stream,"%s",s);
		printf("%s\n",s);
		fclose(stream);
	}
}
