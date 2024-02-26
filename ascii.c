#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *ptr;

	ptr = av[1];
	while (*ptr != '\0')
	{
		printf("%d\n", *ptr);
		ptr++;
	}
	return (0);
}
