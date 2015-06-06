#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* p1 = (char *)malloc(sizeof(char)*1000);
	strcpy(p1, "hello world 1");
	printf("p1=%s\n",p1);
	free(p1);

	char* p2 = (char*)malloc(sizeof(char)*1000);
	strcpy(p2,"hello world");
	printf("p2:%p p2=%s\n",p2,p2);
	free(p2);

	char* p = (char*)calloc(1,sizeof(char)*1000);
	printf("%p p=%s\n",p,p);
	free(p);

return 0;
}
