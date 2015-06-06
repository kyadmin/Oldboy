#include <stdio.h>
#include <string.h>

int main() 
{
	char a[5]={'h','e','l','l','o'};
	char b[6]={'h','e','l','l','o','\0'};

	printf("len_a=%d,len_b=%d\n",strlen(a),strlen(b));
	printf("len_a=%d,len_b=%d\n",sizeof(a),sizeof(b));
	printf("a=%s,b=%s\n",a,b);
return 0;
} 
