#include <stdio.h>

int test(int n);

/**
 * _sqrt_recursion_helper - Helper function to calculate the square root
 * @n: Number for which to find the square root
 * @i: Current value to subtract from n
 *
 * Return: Calculated square root
 */
int _sqrt_recursion_helper(int n, int i)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    if (n == test(i))
        return i;
    else if (n < test(i))
        return -1; // n is not a perfect square
    else
        return _sqrt_recursion_helper(n, i + 1);
}

/**
 * _sqrt_recursion - Calculates the square root of a given number
 * @n: Integer
 *
 * Return: Calculated square root
 */
int _sqrt_recursion(int n)
{
    return _sqrt_recursion_helper(n, 1);
}

/**
 * test - Helper function to check if a number is a perfect square
 * @n: Number to check
 *
 * Return: 1 if it's a perfect square, -1 otherwise
 */
int test(int n)
{
    int i = 1;

    while (n > 0)
    {
        n -= i;
        i += 2;
    }

    if (n == 0)
        return 1;
    else
        return -1;
}

int main(void)
{
    int num = 25;
    int result = _sqrt_recursion(num);

    if (result != -1)
        printf("Square root of %d is %d\n", num, result);
    else
        printf("%d does not have a natural root or is not a perfect square.\n", num);

    return 0;
}

