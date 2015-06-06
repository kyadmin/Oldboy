#include <stdio.h>
#include <string.h>

struct student {
	int name[200];
	int age;
	int score;
};

struct class {
	int total;
	struct student stu[100];
};

int main()
{
	int i = 0;
	struct class a;
	a.total = 2;
	char name[64];
	int age;
	int score;
	for (i = 0;i<a.total;i++){
	scanf("%s",&name);
	strcpy(a.stu[i].name,name);
	scanf("%d",&age);
	a.stu[i].age = age;
	scanf("%d",&score);
	a.stu[i].score = score;
	}
	for (i=0;i<a.total;i++) {
	printf("stu%d: name=%s, age=%d,score=%d\n",
		i,a.stu[i].name,a.stu[i].age,a.stu[i].score);
	}
	return 0;
}
