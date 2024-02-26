#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main()
{
	int first = 1;
	int val, maxval, minval;

	while (scanf("%d", &val) != EOF)
	{
		if (first || val > maxval)
			maxval = val;
		if (first || val < minval)
			minval = val;
		first = 0;
	}
	printf("Maximun %d\n", maxval);
	printf("Minimum %d\n", minval);
	return (0);
}
