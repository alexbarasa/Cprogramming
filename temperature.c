#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alwasys 0 (Success)
 */
int main(void)
{
	int f;
	int c;

	printf("Please enter the Fahrenheit to convert to celsius: ");
	scanf("%d", &f);
	c = 5 * (f - 32) / 9;

	printf("%d\n", c);
	return (0);
}
