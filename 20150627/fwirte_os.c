#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd,size;
	char s[] = "Linux Programmer!\n";
	char buffer[80];
	fd = open("temp",O_WRONLY | O_CREAT,0777);
	write(fd,s,(sizeof(s)-1));
	close(fd);
	fd = open("temp",O_RDONLY);
	off_t offset = lseek(fd,0,SEEK_CUR);
	printf("offset : %d\n",offset);
	printf("offset : %d\n",sizeof(s));
	offset = lseek(fs,10,SEEK_SET);
	size = read(fd,buffer,sizeof(s));
	offset = lseek(fd,0,SEEK_CUR);
	printf("offset: %d\n",offset);
	close(fd);
	printf("%s",buffer);
	return 0;
}
