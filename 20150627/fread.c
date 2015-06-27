#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct stu{
        char name[10];
        int age;
        int score;
};

int main()
{
	struct stu s;
	FILE* fp = fopen("test.log","r");
	if (fp == NULL)
	{
		printf("Open file failed,err:%s\n",strerror(errno));
		exit(-1);
	}
	fread(&s,sizeof(s),1,fp);
	printf("name:%s\n age:%d\n score:%d\n",s.name,s.age,s.score);
	fclose(fp);
	return 0;
}
