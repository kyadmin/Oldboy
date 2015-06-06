#include <stdio.h>
#include <stdlib.h>

main()
{
	char a[3][10]={"BOMKHGAaNn","YRsKNNsans","ofinesAslL"};
	int i,j,k;
	for (i=0;i<3;i++)
	{
	k=0;
	for (j=0;j<10;j++)
	{
	if(a[i][j]>64 && a[i][j]<91)
		k=k+1;
		printf("%c",a[i][j]);
	}
		printf("\n");
		printf("\033[1;31m--line(%d):\033[0m \033[1;32mThere are %d uper words in total!\033[0m\n\n",i,k);
	}
return 0;
}
