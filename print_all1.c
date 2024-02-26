#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_all - Prints Char, int, float, double and string
 *
 * @format: List of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i;
	/*float f;*/

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);
		}
		i++;
		if (format[i])
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
