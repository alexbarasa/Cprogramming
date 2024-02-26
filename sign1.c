#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        putchar('+');
        return 1;
    } else if (n < 0) {
        putchar('-');
        return -1;
    } else {
        putchar('0');
        return 0;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = print_sign(number);

    putchar('\n'); // Add a newline for better formatting
    printf("Result: %d\n", result);

    return 0;
}

