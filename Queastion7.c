#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char sentence[1000];

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1; // Exit the program with an error code
    }

    // Read a sentence from the input file
    if (fgets(sentence, sizeof(sentence), inputFile) != NULL) {
        // Capitalize the sentence
        for (int i = 0; sentence[i] != '\0'; i++) {
            sentence[i] = toupper(sentence[i]);
        }
    }

    // Close the input file
    fclose(inputFile);

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        return 1; // Exit the program with an error code
    }

    // Write the capitalized sentence to the output file
    fprintf(outputFile, "%s", sentence);

    // Close the output file
    fclose(outputFile);

    printf("The sentence has been capitalized and written to output.txt\n");

    return 0;
}
