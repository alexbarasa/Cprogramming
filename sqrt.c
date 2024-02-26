#include <stdio.h>
int test(int n)
{
	int i;

	i = 1;
	while ( n > 0)
	{
		n -= i;
		i += 2;
	}
	if (n == 0)
		return (1);
	else
		return (-1);
}
int main(void)
{
	int x = 144;
	int y = test(x);
	printf("%d\n", y);
	return (0);
}
