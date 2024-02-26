#include <stdio.h>
int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Calculates the square root of
 * a given number.
 *
 * @n: Integer
 * Return: Calculated square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1; // Square root of a negative number is undefined
    }

    return sqrt_helper(n, 1);
}

/**
 * sqrt_helper - Helper function for calculating square root recursively
 *
 * @n: Original number
 * @guess: Current guess for square root
 * Return: Calculated square root
 */
int sqrt_helper(int n, int guess)
{
    if (guess * guess == n) {
        return guess; // Found the square root
    } else if (guess * guess > n) {
        return -1; // n is not a perfect square
    } else {
        return sqrt_helper(n, guess + 1); // Try the next guess
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = _sqrt_recursion(num);

    if (result != -1) {
        printf("Square root: %d\n", result);
    } else {
        printf("Not a perfect square.\n");
    }

    return 0;
}

