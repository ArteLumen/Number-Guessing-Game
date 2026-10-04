#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = rand() % 100 + 1;
    
    printf("=== WELCOME TO THE NUMBER GUESSING GAME ===\n");
    printf("I have chosen a number between 1 and 100. Try to guess it!\n\n");

    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Guess a LOWER number.\n\n");
        } else if (guess < secretNumber) {
            printf("Guess a HIGHER number.\n\n");
        } else {
            printf("\nCongratulations! You found the correct number in %d attempts!\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
