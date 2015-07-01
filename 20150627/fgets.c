#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char msg[] = "This is a test!\n send line\n";
	char msgget[100];
	int i = 0;
	FILE* fstream;
	fstream = fopen("test.txt","w+");
	if(fstream==NULL)
	{
		printf("Open file failed!\n");
		exit(1);
	}
	fputs(msg,fstream);
	fflush(fstream);
	close(fileno(fstream));
	fstream=fopen("test.txt","r");
	i = 0;
	fgets(msgget,3,fstream);
	fputs(msgget,stdout);
	printf("\n");
	fgets(msgget,100,fstream);
	fputs(msgget,stdout);
	return 0;
}
