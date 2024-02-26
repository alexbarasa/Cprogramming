#include <stdio.h>

int _atoi(char *s);
int _is_digit(char *s);

int main(int argc, char **argv)
{
    int i, sum, count, num;
    int digits[10];

    sum = 0;
    count = 0;

    for (i = 1; i < argc; i++)
    {
        sum += _atoi(argv[i]);
        count++;

        if (!_is_digit(argv[i]))
        {
            char *e = "Error";

            while (*e != '\0')
            {
                putchar(*e);
                e++;
            }

            putchar('\n');
            return 1;
        }
    }

    if (count == 0)
    {
        putchar('0');
    }
    else
    {
        num = 0;
        while (sum > 0)
        {
            digits[num++] = sum % 10;
            sum /= 10;
        }

        for (i = num - 1; i >= 0; i--)
        {
            putchar('0' + digits[i]);
        }
    }

    putchar('\n');
    return 0;
}

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

int _is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

