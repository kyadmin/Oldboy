void display_all()
{
	User user,temp;
        FILE *fp;
        int fr;
        fp=fopen("custom.txt","ab+");
        printf("当前在线好友\n");
        while(1)
        {
                fr=fread(&temp,sizeof(User),1,fp);
                if(fr==0)
                {
                break;
                }
		if(strcmp(temp.username,user.username)==0)
		{
			continue;
		}
		else
		{
                printf("%s\n",temp.username);
		}
        }
}
