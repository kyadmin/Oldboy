#include <stdio.h>
#include  <stdlib.h>
#include <string.h>
#include <srrno.h>

struct stu{
	char name[10];
	int age;
	int score;
};
int main()
{
	struct stu s[10];
	int i = 0;
	int count = 5;
	for (i=0;i<count;i++) {
		sprintf(s[i].name,"rain-%d",i);
		s[i]age = rand()%30;
		s[i].score = rand()%30;
	}

	FILE* fp = fopen("./test1.log","w");
	int ret = fwrite(s,sizeof(struct stu),count,fp)
	if (ret != count) {
		printf("write failed,err:%s\n",strerror(errno));
		//fwrite(&s,sizeof(s),1,fp);
		fclose(fp);
		return -1;
	}
	fclose(fp);
	return 0;
}
