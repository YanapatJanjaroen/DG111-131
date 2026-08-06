#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int target = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    printf("=== Number Guessing Game (1-100) ===\n");
    do
    {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);
        attempts++;
        if (guess < target)
        {
            printf("Too low!\n");
        }
        else if (guess > target)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}