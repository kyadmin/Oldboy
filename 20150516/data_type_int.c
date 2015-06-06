#include <stdio.h>

int main() {
	int b= 5;
	int i=0;
	int a[b];
	for (i=1;i<=5;i++){
		a[i-1] = i;
	}
	for (i=0;i<=5;i++){
	printf("a[%d]=%d \n",i,a[i]);
}
return 0;	
}
