#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/in.h>
#include <string.h>

typedef struct conn_s {
	int fd;
	struct conn_s* next;
} conn_t;

int main()
{
	int listen_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (listen_fd < 0) {
	printf("create socket failed","errno:%d",errno);
	return -1;
	}
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(18888);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	int ret = bind(listen_fd, (struct sockaddr*)&addr,sizeof(addr));
	if (ret == -1) {
		printf("bind socket failed,errno:%d\n",errno);
		return -1;
	}
	listen(listen_fd, 1024);
	
	conn_t* head = (conn_t*)malloc(sizeof(conn_t));
	head->fd = listen_fd;
	head->next = NULL;
	fd_set readset;
	while (1) {
	FD_ZERO(&readset);
	int max_fd = 0;
	conn_t* p = head;
	while (p) {
		if (p->fd > 0) {
		FD_SET(p->fd, &readset);
		if (p->fd > max_fd) {
			max_fd = p->fd;
		}
		}
		p = p->next;
	}
	struct timeval tv;
	tv.tv_sec = 1;
	int ret = select(max_fd+1,&readset,NULL,NULL,&tv);
	if (ret == 0) {
		continue;
	}
	if (ret < 0) {
		printf("select error,errno:%d\n",errno);
		continue
	}
	p = head;
	while (p) {
		if (FD_ISSET(P->FD,&READSET)) {
		if (P->FD == LISTEN_FD) {
		int client_fd = accept(listen_fd,NULL,NULL);	
		conn_t* conn = (conn_t*)malloc(sizeof(conn_t));
		conn->fd = client_fd;
		conn->next = head;

		head = conn;
		else {
		char buf[8192];
		int ret = recv(p->fd,buf,sizeof(buf),0);
		if (ret <= 0) {
		close(p->fd);
		p->fd = -1;
		}
		else{
		buf[ret] = '\0';
		send(p->fd,buf,strlen(buf,0));
		}
		}
	}
	p = p->next;
	}
	}
	close(listen_fd);
	return 0;
	}
}
