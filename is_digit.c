#include <stdio.h>

int is_digit(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Not a digit
        }
        str++;
    }
    return 1; // All characters are digits
}

int main() {
    const char *input = "12345";

    if (is_digit(input)) {
        printf("The string '%s' is a digit.\n", input);
    } else {
        printf("The string '%s' is not a digit.\n", input);
    }

    return 0;
}

