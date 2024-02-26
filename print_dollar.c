#include <stdio.h>

int main(void)
{
	char command[100];

	while (1)
	{
		printf("$ ");
		fflush(stdout);
		if (fgets(command, sizeof(command), stdin) != NULL)
		{
			printf("%s", command);
		}
		else
			break;
	}
	return (0);
}
