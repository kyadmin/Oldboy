#include <stdio.h>

main() 
{
	struct stu{
	int num;
	char *name;
	char sex;
	float score;
	} *ps;
	ps=(struct stu*)malloc(sizeof(struct stu));
	ps->num=102;
	ps->name="Rain Wang";
	ps->sex='M';
	ps->score=63;
	printf("Number=%d\nName=%s\n",ps->num,ps->name);
	printf("Sex=%c\nScore=%f\n",ps->sex,ps->score);
	free(ps);
}
