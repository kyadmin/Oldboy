#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

struct stu{
	char name[10];
	int age;
	int score;
};
int main()
{
	struct stu s;
	strcpy(s.name,"rain");
	s.age = 33;
	s.score = 100;

	FILE* fp = fopen("./test.log","w");
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	return 0;
}
