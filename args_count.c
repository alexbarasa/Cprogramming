#include <stdio.h>
int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);
	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
		printf("The command had no other arguments.\n");
	printf("argc = %d\n", argc);
	printf("%s\n", argv[argc]);
	return (0);
}
