#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void RandomCode(char Rcode[])
{
	int i;
	srand ((unsigned int)time(NULL));
	for (i=0;i<3;i++)
		Rcode[i]=rand()%10 + '0';
		Rcode[i]='\0';
}




main()
{
	char name[]="admin",pass[]="123456";
	char pname[15]={0},ppass[15]={0};
	printf("please input name:\n");
	scanf("%s",pname);
	printf("please input password:\n");
	scanf("%s",ppass);
	if (strcmp(name,pname!=0 || strcmp(pass,ppass)!=0))
	{
		printf("用户名或密码错误\n");
	}	
	else
	{
		printf("Welcome!\n");
	}
	return 0;
}
