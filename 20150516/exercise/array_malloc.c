#include <stdio.h>
#include <stdlib.h>

void printRet(int** arr, int arrLen ){
	int i,j;
	for(i = 0; i < arrLen ; ++ i ){
		for(j = 0; j < arrLen ; ++ j ){
			int val = arr[i][j];
			printf( "%d " , val );
		}
		
		printf( "\n" );
	}
}

int main(int argc, char *argv[]){
	int arrLen = 5;
	printf("\n\033[1;32m请输入一个int类型(范围是0~9):\033[0m\n");
	scanf("%d",&arrLen);
	
	int** arr = (int**)malloc(sizeof(int*)*arrLen);
	int i,j;
	for(i=0;i<arrLen; ++i){
		arr[i]=(int*)malloc(sizeof(int)*arrLen);
		for(j=0;j<arrLen;++j){
			arr[i][j] = arrLen;
		}
	}
	
	printf("\n");
	printRet(arr,arrLen);
	printf("\n");
	
	for(i=0;i<arrLen;++i){
		for(j=0;j<arrLen-i ;++j){
			arr[i][j] = 0;
		}
	}
	printRet(arr,arrLen );
}
