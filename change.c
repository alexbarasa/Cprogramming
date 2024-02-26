#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the number of arguments is correct
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    // Convert the input argument to an integer
    int cents = atoi(argv[1]);

    // Check if the input is negative
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    // Initialize variables to count the number of coins
    int quarters, dimes, nickels, pennies;
    quarters = dimes = nickels = pennies = 0;

    // Calculate the minimum number of coins
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    while (cents >= 5) {
        cents -= 5;
        nickels++;
    }

    while (cents >= 1) {
        cents -= 1;
        pennies++;
    }

    // Print the result
    printf("%d\n", quarters + dimes + nickels + pennies);

    return 0;
}

