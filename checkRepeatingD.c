#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int N, i;
	int seen[10] = {0};
	int rem;

	printf("Please enter a number to check: ");
	scanf("%d", &N);

	while (N > 0)
	{
		rem = N % 10;
		if (seen[rem] == 1)
		{
			printf("Yes\n");
			break;
		}
		seen[rem] = 1;
		N = N / 10;
	}
	if (N == 0)
		printf("No\n");
	for (i = 0; i < 10; i++)
		printf("%d", seen[i]);
	printf("\n");
	printf("%ld\n", sizeof(seen) / sizeof(seen[1]));
	return 0;
}
