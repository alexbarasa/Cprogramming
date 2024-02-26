#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_digit - Prints the digits of a given number either
 * in base 10 (decimal), base 16 (hexadecimal) or base 2 (binary)
 *
 * @n: Long integer
 * @base: The base to be converted to
 * Return: Converted number
 */
int print_digit(long n, int base)
{
        int count, digit;
        char *symbols;

        count = 0;
        symbols = "0123456789abcdefABCDEF";
        if (n == 0)
        {
                count += _putchar('0');
                return (count);
        }
        if (n < 0)
        {
                write(1, "-", 1);
                return (print_digit(-n, base) + 1);
        }
        if (n != 2 && n != 10 && n != 16)
        {
                return (-1);
        }
        while (n != 0)
        {
                digit = n % base;
                count += _putchar(symbols[digit]);
                n /= base;
        }
        return (count);
}

int main() {
    long number = 12345;
    
    printf("Decimal: ");
    print_digit(number, 10);
    printf("\n");
    
    printf("Hexadecimal: ");
    print_digit(number, 16);
    printf("\n");
    
    printf("Binary: ");
    print_digit(number, 2);
    printf("\n");

    return 0;
}
