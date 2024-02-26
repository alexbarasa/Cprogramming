#include <stdio.h>
#define N 10
/**
 * main - Entry point
 *
 * Return: 0.
 */
int main(void)
{
	int a[N], i;
	for (i = 0; i < N; i++)
	{
		printf("Enter the input for index %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("\nArray elements are as follows:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
