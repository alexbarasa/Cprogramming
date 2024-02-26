#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef void (*PrintFunction)(va_list);

void print_char(va_list args) {
    printf("%c", va_arg(args, int));
}

void print_int(va_list args) {
    printf("%d", va_arg(args, int));
}

void print_float(va_list args) {
    printf("%f", va_arg(args, double));
}

void print_string(va_list args) {
    char *s = va_arg(args, char *);
    if (s == NULL)
        printf("(nil)");
    else
        printf("%s", s);
}

void print_separator(const char *ptr) {
    if (*(ptr + 1) != '\0')
        printf(", ");
}

void print_all(const char * const format, ...) {
    va_list args;
    va_start(args, format);

    const char *ptr = format;
    PrintFunction print_functions[256] = { NULL };

    print_functions['c'] = print_char;
    print_functions['i'] = print_int;
    print_functions['f'] = print_float;
    print_functions['s'] = print_string;

    while (*ptr) {
        PrintFunction print_func = print_functions[(unsigned char)*ptr];
        if (print_func != NULL) {
            print_func(args);
            print_separator(ptr);
        }
        ptr++;
    }

    va_end(args);
    printf("\n");
}

int main() {
    print_all("cis", 'H', 42, "Hello");
    print_all("cifs", 'W', -1, 3.14, "World");
    print_all("s", NULL);
    return 0;
}

