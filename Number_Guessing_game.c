#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
int secret, guess, attempts = 0;
secret = rand() % 100 + 1;

printf("Guess the number (1-100)!\n");

do {
printf("Enter your guess: ");
scanf("%d", &guess);
attempts++;

if (guess > secret) printf("Too high!\n");
else if (guess < secret) printf("Too low!\n");
else printf("Correct! You took %d attempts.\n", attempts);
} while (guess != secret);
}

int main() {
srand(time(NULL));
char playAgain;

do {
playGame();
printf("Play again? (y/n): ");
scanf(" %c", &playAgain);
} while (playAgain == 'y' || playAgain == 'Y');

return 0;
}
