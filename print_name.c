#include <stdio.h>
#include <ctype.h>

/**
 * print_name - Prints the given name
 *
 * @name: Pointer to a name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *)) {
    while (*name != '\0') {
        putchar(*name);
        name++;
    }
    f(name);
}

// Example function to print a name in uppercase
void print_uppercase(char *name) {
    while (*name != '\0') {
        putchar(toupper(*name));
        name++;
    }
    putchar('\n');
}

// Example function to print a name in lowercase
void print_lowercase(char *name) {
    while (*name != '\0') {
        putchar(tolower(*name));
        name++;
    }
    putchar('\n');
}

int main() {
    char myName[] = "John Doe";

    // Print the name
    print_name(myName, print_uppercase);

    return 0;
}

