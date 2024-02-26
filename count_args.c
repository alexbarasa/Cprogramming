#include <stdio.h>
int main(int argc, char *argv[])
{
	int i, count;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
