#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *token;
	char *path = getenv("PATH");

	token = strtok(path, ":");
	printf("%s\n", token);

	while (token == strtok(0, ":"))
	{
		printf("%s\n", token);
	}
}
