#include <stdio.h>
int main()
{
    int n, i;
    int isprime = 1;
    printf("Enter Number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime)
    {
        printf("is a Prime Number.\n", n);
    }
    else
    {
        printf("is not a Prime Number.\n", n);
    }
    return 0;
}