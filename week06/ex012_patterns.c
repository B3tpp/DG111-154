#include <stdio.h>
int main()
{
    printf("Pattern Triangle:\n");
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Pattern Square:\n");
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Pattern Diamond:\n");
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3 - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 2; row >= 1; row--)
    {
        for (int col = 1; col <= 3 - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}