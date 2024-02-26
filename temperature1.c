#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, c;
	int lower, upper, step;

	printf("Please enter the lower limit: ");
	scanf("%d", &lower);
	printf("Please enter the upper limit: ");
	scanf("%d", &upper);
	printf("Please enter the steps: ");
	scanf("%d", &step);
	f = lower;
	while (f <= upper)
	{
		c = 5 * (f - 32) / 9;
		printf("%d\t%d\n", f, c);
		f += step;
	}
	return (0);
}
