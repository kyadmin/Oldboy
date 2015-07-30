#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/in.h>
#include <string.h>

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
	send(client_fd,buf,strlen(buf),0);
	}
	return 0;
}

int main()
{
	int fd = socket(AF_INET,SOCK_STREAM,0);
	if (fd < 0) {
		printf("create socket failed","errno:%d\n",errno);
		return -1;
	}

	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(18888);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(fd,(struct sockaddr*)&addr, sizeof(addr));
	listen(fd,1024);

	while (1) {
		int client_fd = accept(fd, (struct sockaddr*)NULL,NULL);
		if (client_fd < 0) {
			printf("accept failed,err:%s\n",errno);
			continue;
		}

		handle(client_fd);
	}
	close(fd);
	return 0;
}
