#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the input is valid (non-negative)
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
    
        // Display the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}