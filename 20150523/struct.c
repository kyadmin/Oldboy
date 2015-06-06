#include <stdio.h>

struct student {
	int count;
	int NO;
}Alex;
int main()
{
	Alex.count=1000;
	struct student R_w;
	R_w.count=90;
	R_w.NO=720;
	printf("R_w count %d\n,R_w NO %d\nAlex=%d\n",R_w.count,R_w.NO,Alex.count);
	return 0;
}
