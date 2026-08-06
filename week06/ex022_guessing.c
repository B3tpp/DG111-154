#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guess, attempts = 0;
    printf("=== Number Guessing Game (1-100) ===");
    printf("\n");
    do
    {
        printf("Enter your guess:");
        scanf("%d", &guess);
        attempts++;
        if (guess < number)
        {
            printf("Too Low!.\n");
        }
        else if (guess > number)
        {
            printf("Too High!.\n");
        }
        else
        {
            printf("Correct! You guessed it %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);
    return 0;
}