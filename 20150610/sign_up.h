#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct custom{
	char username[30];
	char password[20];
	char sex[6];
	int age;
	char email[30];
}User;
int sign_up()
{
	User user,temp;
	FILE* fp;
	int fr;
	printf("请输入用户名:");		
	scanf("%s",user.username);
	printf("请输入密码:");		
	scanf("%s",user.password);
	printf("请输入性别:");		
	scanf("%s",user.sex);
	printf("请输入年龄:");		
	scanf("%d",&user.age);
	printf("请输入邮箱:");		
	scanf("%s",user.email);
	fp=fopen("custom.txt","rb");
	if(fp==NULL)
		printf("打开文件失败!\n");
	while(1)
	{
		fr=fread(&temp,sizeof(User),1,fp);
		if(fr==0)
		{
			break;
		}
		if(strcmp(temp.username,user.username)==0)
		{
			printf("用户已经存在,请重新注册!\n");
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);
	fp = fopen("custom.txt","ab+");
	fwrite(&user,sizeof(User),1,fp);
	fclose(fp);
	printf("注册成功!\n");
	return 0;
	
}

void read_user()
{
	FILE *fp;
	int fr;
	User temp;
	fp=fopen("custom.txt","ab+");
	printf("当前在线好友\n");
	while(1)
	{
		fr=fread(&temp,sizeof(User),1,fp);
		if(fr==0)
		{
		break;
		}
		printf("%s\n",temp.username);
	}
}
