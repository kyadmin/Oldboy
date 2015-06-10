#include "sign_up.h"
#include "sign_in.h"


int main()
{
	printf("\n*****************新浪微博***************\n");
	printf("*	1. 注册新用户	        	*\n");
	printf("*	2. 用户登录			*\n");
	printf("*	3. 查看在线用户			*\n");
	printf("*****************************************\n");
	while (1)
	{
	int id;
	printf("#");
	scanf("%d",&id);
	switch(id)
	{
	case 1:sign_up();break;
	case 2:sign_in();break;
	case 3:read_user();break;
	default:break;
	}
	}
	return 0;
}
