#include <stdio.h>
#include <string.h>

main()
{   
    int cash;
    int a;
    int i=1;
    int sum=0;
    int price[10]={5288,2999,9999,1299,8888,1299,3600};
    int change;
    char *brand[8]={"iphone","ipad","imac","ipod","Macair","Macbook","iwatch"};
    printf("-------------欢迎光临老男孩超市---------------\n");
    printf("\n  我超市商品清单如下：\n  0. iphone 5288\n  1. ipad   2999\n  2. imac   9999\n  3. ipod   1299\n  4. Macair  8888\n  5. Macbook 1299\n  6. iwatch 3600\n  7. 准备结账\n");
    printf("请将你需要的商品加入购物车，输入商品序号\n");
    while (i)
    {
    scanf("%d",&a);
    switch(a)
	{	
		case 0:printf("你已经将\033[1;31miphone\033[0m加入购物车中\n");break;
		case 1: printf("你已经将\033[1;31mipad\033[0m加入购物车中\n");break;
		case 2: printf("你已经将\033[1;31mimac\033[0m加入购物车中\n");break;
		case 3: printf("你已经将\033[1;31mipod\033[0m加入购物车中\n");break;
		case 4: printf("你已经将\033[1;31mMacair\033[0m加入购物车中\n");break;
		case 5: printf("你已经将\033[1;31mMacbook\033[0m加入购物车中\n");break;
		case 6: printf("你已经将\033[1;31miwatch\033[0m加入购物车中\n");break;	
		case 7: goto check;
		default: printf("你输入的商品不在清单中\n");
	}
	sum+=price[a];
	printf("-----------\033[1;32m继续购物，继续选择商品序号\033[0m------------\n");
	printf("\033[1;32m------------------结账选择序号\033[1;31m7\033[0m:-----------------\033[0m\n");
    }
    check:
    while (i)
    {
	if (sum==0)
	{
		printf("\033[1;31m你啥也没买，送客!\033[0m\n");break;
	}
	else
	{
	printf("\033[1;32m收银员开始扫描商品,你的商品合计金额:%d元RMB\033[0m\n",sum);
        printf("\033[1;31m刷卡还是现金？请付款!\033[0m\n");
    	scanf("%d",&cash);
	change=cash-sum;
        printf("\033[1;32m您支付的金额为:\033[1;31m%d元(RMB)\033[0m\n \033[1;32m找零:\033[1;31m%d元(RMB)\033[0m \033[0m\n",cash,change);break;
	}
    }
return 0;
}
