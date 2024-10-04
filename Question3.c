#include <stdio.h>

int main() {
    int i, j, space, rows = 5;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf("");  // Replace '' with a space for actual whitespace
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}