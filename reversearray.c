#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int reverse(int array[]);
int main(void)
{
	int arr[9] = {34, 56, 54, 32, 67, 89, 92, 32, 21};
	int i;

	for (i = 0; i < 9; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	reverse(arr);
	return (0);
}
/**
 * reverse - reverses the given array of numbers
 *
 * @array[]: array of numbers
 * Return: 0
 */
int reverse(int array[])
{
	int i;

	for (i = 8; i >= 0; i--)
		printf("%d", array[i]);
	printf("\n");
	return (0);
}
