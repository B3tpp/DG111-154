#include <stdio.h>
int main()

{
    for (int i = 1; i <= 10; i++)
    {
        printf("For loop: %d\n", i);
    }
    int i = 1;
    while (i <= 10)
    {
        printf("While loop: %d\n", i);
        i++;
    }
    i = 1;
    do
    {
        printf("Do-while loop: %d\n", i);
        i++;
    } while (i <= 10);
    printf("sum of 1 to 10 %d\n");
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        printf("sum: %d\n", sum);
    }
    return 0;
}