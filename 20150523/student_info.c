#include <stdio.h>

typedef struct student
{
	char name[20];
	char sex[10];
	unsigned int id;
	unsigned long long score;
}STU;

int main()
{
	STU stu[10]={{"A","male",1,456},\
{"B","female",2,567},\
{"C","male",3,345},\
{"D","female",4,234}};
	int i=0;
	for (i=0;i<4;i++)
	{
		if ((strcmp(stu[i].sex,"female")==0) && stu[i].score > 500)	
		{
			printf("Student info\nname:%s\nsex:%s\nid:%s\nfloat:%s\n",(stu+i)->name,stu[i].sex,stu[i].id,stu[i].score);
		}

	}
return 0;
}
