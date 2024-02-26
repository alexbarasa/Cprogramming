#include <stdio.h>
/**main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char *file = __FILE__;

        while (*file != '\0')
        {
                putchar(*file);
                file++;
        }
        putchar('\n');
        return (0);
}

