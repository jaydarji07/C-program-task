// #include <stdio.h>
// #include <ctype.h> // For tolower() function

// // Function to count the occurrences of each vowel
// void countVowels(char sentence[], int vowelCount[5]) {
//     int i = 0;

//     // Initialize the vowel count array to 0
//     for (i = 0; i < 5; i++) {
//         vowelCount[i] = 0;
//     }

//     // Traverse the sentence and count vowels
//     i = 0;
//     while (sentence[i] != '\0') {
//         char ch = tolower(sentence[i]); // Convert character to lowercase
//         switch (ch) {
//             case 'a': vowelCount[0]++; break;
//             case 'e': vowelCount[1]++; break;
//             case 'i': vowelCount[2]++; break;
//             case 'o': vowelCount[3]++; break;
//             case 'u': vowelCount[4]++; break;
//         }
//         i++;
//     }
// }

// int main() {
//     char sentence[1000];
//     int vowelCount[5]; // To store counts for 'a', 'e', 'i', 'o', 'u'

//     // Read a sentence from the user
//     printf("Enter a sentence: ");
//     fgets(sentence, sizeof(sentence), stdin);

//     // Call the function to count the vowels
//     countVowels(sentence, vowelCount);

//     // Display the counts of each vowel
//     printf("Vowel counts:\n");
//     printf("A: %d\n", vowelCount[0]);
//     printf("E: %d\n", vowelCount[1]);
//     printf("I: %d\n", vowelCount[2]);
//     printf("O: %d\n", vowelCount[3]);
//     printf("U: %d\n", vowelCount[4]);

//     return 0;
// }

#include <stdio.h>
#include <ctype.h> // For tolower() function

// Function to count the occurrences of each vowel
void countVowels(char sentence[], int vowelCount[5]) {
    int i = 0;

    // Initialize the vowel count array to 0
    for (i = 0; i < 5; i++) {
        vowelCount[i] = 0;
    }

    

    // Traverse the sentence and count vowels
    i = 0;
    while (sentence[i] != '\0') {
        char ch = tolower(sentence[i]); // Convert character to lowercase
        switch (ch) {
            case 'a': vowelCount[0]++; break;
            case 'e': vowelCount[1]++; break;
            case 'i': vowelCount[2]++; break;
            case 'o': vowelCount[3]++; break;
            case 'u': vowelCount[4]++; break;
        }
        i++;
    }
}

int main() {
    char sentence[1000];
    int vowelCount[5]; // To store counts for 'a', 'e', 'i', 'o', 'u'

    // Read a sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Call the function to count the vowels
    countVowels(sentence, vowelCount);

    // Display the counts of each vowel
    printf("Vowel counts:\n");
    printf("A: %d\n", vowelCount[0]);
    printf("E: %d\n", vowelCount[1]);
    printf("I: %d\n", vowelCount[2]);
    printf("O: %d\n", vowelCount[3]);
    printf("U: %d\n", vowelCount[4]);

    return 0;
}