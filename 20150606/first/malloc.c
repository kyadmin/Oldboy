#include <stdio.h>
#include <stdlib.h>

int main()
{
char* p = (char*)malloc(sizeof(char)*1000);
printf("%s\n",p);
return 0;
}
