#include "menu_A.h"

int sign_in()
{
	User user,temp;
        FILE *fp;
        int fr;	
	printf("请输入用户名:");
        scanf("%s",user.username);
        printf("请输入密码:");
        scanf("%s",user.password);
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
		if((strcmp(user.username,temp.username)==0)&&(strcmp(user.password,temp.password)==0))
		{
		printf("用户登录成功!\n");
		menu_A();
		while (1)
		{
		int id;
        	printf("#");
       		scanf("%d",&id);
        	switch(id)
        	{
        		//case 1:printf("display all");break;
        		case 1:display_all();break;
        		case 2:printf("watch someone");break;
        		case 3:printf("display detailed infomation");break;
        		default:break;
        	}	
		}
        	}
		break;
	}
		printf("用户名或密码错误!\n");	
	
	return 0;
}
