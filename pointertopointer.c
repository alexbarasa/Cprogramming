#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *ptr;
	int **pptr;

	n = 400;
	ptr = &n;
	pptr = &ptr;
	printf("Address of n is: %p\n", &n);
	printf("Address of *ptr is: %p\n", ptr);
	printf("Address of **pptr is: %p\n", *pptr);
	/* Possible ways to find the value stored by variable n */
	printf("The value of n is: %d\n", n);
	printf("The value of n is: %d\n", *ptr);
	printf("The value of n is: %d\n", **pptr);
	/* The addresses of the pointers */
	printf("The address of *ptr is: %p\n", &ptr);
	printf("The address of *ptr using **pptr is: %p\n", pptr);
	printf("The address of **pptr is: %p\n", &pptr);
	printf("Value of **pptr is: %p\n", pptr);
	return (0);
}
