#include <stdio.h>

// Function to swap the values of two integers using pointers
void swap(int *a, int *b) {
    int temp;  // Temporary variable to hold one of the values
    temp = *a; // Store the value of a in temp
    *a = *b;   // Assign the value of b to a
    *b = temp; // Assign the value of temp (original a) to b
}

int main() {
    int num1, num2;

    // Prompt the user to enter two integers
    printf("Enter two integers:\n");
    printf("First integer: ");
    scanf("%d", &num1);
    printf("Second integer: ");
    scanf("%d", &num2);

    // Display the values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(&num1, &num2);

    // Display the values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}