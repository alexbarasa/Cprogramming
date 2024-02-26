#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int main(int ac, char **av)
{
	char **ptr;

	ptr = av;
	while (*ptr != NULL)
	{
		printf("%s\n", *ptr);
		ptr++;
	}
	return (0);
}
