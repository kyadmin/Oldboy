#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct stu {
	char name[260];
	int age;
	int score;
};


int main()
{
	struct stu s[10];
	int i = 0;
	int count = 5;

	FILE* fp = fopen("./test.log", "r");
	if (fp == NULL) {
		printf("fopen failed, err:%s\n", strerror(errno));
		return 0;
	}

	int ret = fread(s, sizeof(struct stu), count, fp);
	if (ret != count) {
		printf("read count:%d, err:%s\n", ret, strerror(errno));
		fclose(fp);
		return -1;
	}
	
	for (i = 0; i < count; i++) {
		printf("name:%s age:%d score:%d\n", s[i].name, s[i].age, s[i].score);
	}

	//fseek(fp, 0, SEEK_SET);
	//fseek(fp, -sizeof(struct stu)*count, SEEK_END);
	fseek(fp, -sizeof(struct stu), SEEK_CUR);

	struct stu one;
	ret = fread(&one, sizeof(struct stu), 1, fp);
	if (ret != 1) {
		printf("read count:%d, err:%s\n", ret, strerror(errno));
		fclose(fp);
		return -1;
	}

	printf("name:%s age:%d score:%d\n", one.name, one.age, one.score);
	fclose(fp);


	return 0;
}
