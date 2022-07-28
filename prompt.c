#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = 0;
	size_t i = 0;

	printf("$ ");
	while (getline (&str, &i, stdin) != 1)
	{
		printf("$");
		printf("Output: %s", str);
	}
	free (str);
	return (0);
}
