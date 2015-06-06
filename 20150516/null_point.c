#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* p = (char*)malloc(512*1024*1024);
    int i = 0;
    for (i = 0; i < 287*1024*1024; i++) 
	{
       p [i] = 'a';
    	}	

    getchar();
    return 0;
}
