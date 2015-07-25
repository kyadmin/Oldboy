#include <stdlib.h>

int main()
{
	pid_t pid = fork();
	if (pid == 0) {
		printf("I'm child process\n");
		sleep(10000);
	} else if (pid > 0) {
		printf("I'm parent process,child pid:%d\n",pid);
		sleep(10000);
	} else {
		printf("fork failed\n");
	}
	return 0;
}
