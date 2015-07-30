#include <stdio.h>
#include <stdib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/in.h>
#include <string.h>

int handle(int client_fd);

void* thread_func(void* args)
{
	int fd = (int64_t)args;
	handle(fd);
	return NULL;
}

int handle(int client_fd)
{
	while (1) {
	char buf[8192];
	int ret = recv(client_fd,buf,sizeof(buf),0);
	if (ret <= 0) {
		printf("recv from client failed,errno:%d\n",errno);
		break;
	}
	buf[ret] = '\0';
	send(client_fd, buf, strlen(buf), 0);
	}

	return 0;
}
