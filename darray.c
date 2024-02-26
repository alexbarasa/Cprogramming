#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int arr[10] = {[0] = 1, [5] = 3, [8] = 9};
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", arr[i]);
	printf("\n");
	return (0);
}
