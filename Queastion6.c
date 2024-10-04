#include <stdio.h>

// Define a structure to represent a movie
struct Movie {
    char title[100];
    char genre[50];
    char language[50];
};

int main() {
    int n, i;

    // Prompt the user to enter the number of movies
    printf("Enter the number of movies: ");
    scanf("%d", &n);

    // Declare an array of Movie structures
    struct Movie movies[n];

    // Input details for each movie
    for (i = 0; i < n; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);
        
        // Clear the input buffer
        getchar();  // to consume the newline character left by scanf
        
        // Get movie title
        printf("Title: ");
        fgets(movies[i].title, sizeof(movies[i].title), stdin);
        
        // Get movie genre
        printf("Genre: ");
        fgets(movies[i].genre, sizeof(movies[i].genre), stdin);
        
        // Get movie language
        printf("Language: ");
        fgets(movies[i].language, sizeof(movies[i].language), stdin);
    }

    // Display the details of the movies
    printf("\nMovie Details:\n");
    for (i = 0; i < n; i++) {
        // Remove newline characters from the strings
        movies[i].title[strcspn(movies[i].title, "\n")] = 0;
        movies[i].genre[strcspn(movies[i].genre, "\n")] = 0;
        movies[i].language[strcspn(movies[i].language, "\n")] = 0;

        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

    return 0;
}