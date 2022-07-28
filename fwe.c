#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	char *argv[] = {"/bin/ls", "-1", "/tmp", NULL};
	int father = 0;
	int status;

	while (father < 5)
	{
		if (fork() == 0)
		{
			execve(argv[0], argv, NULL);
		}
		else
		wait(&status);
		father++;
	}
	return (0);
}
