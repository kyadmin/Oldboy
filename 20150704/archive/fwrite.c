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
	for (i = 0; i < count ; i++) {
		sprintf(s[i].name, "dongxu%d", i);
		s[i].age = rand() % 100;
		s[i].score = rand() % 100;
	}

	FILE* fp = fopen("./test.log", "w");
	int ret = fwrite(s, sizeof(struct stu), count, fp);
	if (ret != count) {
		printf("write failed, err:%s\n", strerror(errno));
		fclose(fp);
		return -1;
	}

	fclose(fp);

	return 0;
}
