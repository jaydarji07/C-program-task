
#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4,
    // but not divisible by 100, unless it is divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Call the function and display the result
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}