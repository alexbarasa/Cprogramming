#include <stdio.h>
int main()
{
	int x, y, z, a;

	x = 255;
	y = 5;
	z = x << y;
	a = x >> y;
	printf("x<<y = %6d, hex: 0x%04x\n", z, z);
	printf("x>>y = %6d, hex: 0x%04x\n", a, a);
	return (0);
}
