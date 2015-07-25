#include <stdio.h>
#include <stdlib.h>

typedef struct _stu
{
	char name[64];
	int age;
	int score;
}student;

typedef struct _cache
{
	student* students;
	int capacity;
	int cur_write_index;
	int begin_write_index;
}student_cache;
