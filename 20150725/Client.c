#include <stdlib.h>  
#include <sys/types.h>  
#include <stdio.h>  
#include <sys/socket.h>  
#include <errno.h>
#include <netinet/in.h>  
#include <string.h>  
  
int main()  
{  
int fd;
struct sockaddr_in addr;
addr.sin_family = AF_INET;
addr.sin_port = htons(18888);
addr.sin_addr.s_addr = htonl(INADDR_ANY);
 
printf("Hello,welcome to client !\r\n");  
fd = socket(AF_INET, SOCK_STREAM, 0);  
if(-1 == fd)  
{  
    printf("socket fail ! \r\n");  
    return -1;  
}  
printf("socket ok !\r\n");  
bind(fd,(struct sockaddr*)&addr, sizeof(addr));
listen(fd,1024);
close(fd);
return 0;  
  
} 
