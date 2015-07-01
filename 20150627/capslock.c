#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int fd,size;
	char buffer[800];
	fd = open("/tmp/capslock.log",O_RDONLY);
	size = read(fd,buffer,800);
	write(fd,size,sizeof(s));
	close(fd);
	printf("%s",buffer);
	
	return 0;
}
