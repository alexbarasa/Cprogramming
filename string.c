#include <stdio.h>
/**
 * main - Entry
 *
 * Return: None
 */
int main()
{
	char line[1000];

	printf("Enter line\n");
	scanf("%[^\n]1000s", line);
	printf("Line: %s\n", line);
	return (0);
}
