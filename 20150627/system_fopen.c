#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd,size;
	char s[] = "Linux programmer \n";
	char buffer[80];
	fd = open("/tmp/temp",O_WRONLY | O_CREAT);
	write(fd,s,sizeof(s));
	close(fd);
	fd = open("/tmp/temp",O_RDONLY);
	size = read(fd,buffer,sizeof(s));
	close(fd);
	printf("%s",buffer);
	return 0;
}
