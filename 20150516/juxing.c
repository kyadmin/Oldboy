#include <stdio.h>

void main()
{
	int a[3][3]={{23,46,11},{99,45,82},{72,90.21}};
	int b[3][3];
	int i,j;
	printf("\n"); 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) {
		printf("%d",a[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<3;i++) {
	b[i][j]=a[j][i];
	}
	printf("\n exchange \n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
		printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
