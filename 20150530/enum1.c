#include <stdio.h>

enum A 
{
	red,black,yellow = 9,green
};

int main(void)
{
	int color = green;
	printf("%d\n",color);
	return 0;
}
