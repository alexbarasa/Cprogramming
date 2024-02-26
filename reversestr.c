#include <stdio.h>
#include <string.h>

/**
 * reverseString - Reverses a string in-place using pointers
 *
 * @s: Pointer to the string to be reversed
 * Return: None
 */
void reverseString(char *s) {
    if (s == NULL) {
        return; // Handle NULL pointer
    }

    int length = strlen(s);
    if (length <= 1) {
        return; // No need to reverse a string of length 0 or 1
    }

    char *start = s;
    char *end = s + length - 1;
    char temp;

    while (start < end) {
        // Swap characters pointed by start and end
        temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

int main(void) {
    char *str;
   str = "Hello, World!";
    
    printf("Original string: %s\n", str);

    // Call the reverseString function
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

