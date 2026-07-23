#include <stdio.h>
int main()
{
    int day;
    printf("enter your day (1-7):");
    scanf("%d", &day);
    char *dayname;
    switch (day)
    {
    case 1:
        dayname = "Monday";
        break;
    case 2:
        dayname = "Tuesday";
        break;
    case 3:
        dayname = "Wednesday";
        break;
    case 4:
        dayname = "Thursday";
        break;
    case 5:
        dayname = "Friday";
        break;
    case 6:
        dayname = "Saturday";
        break;
    case 7:
        dayname = "Sunday";
        break;
    default:
        dayname = "Invalid day";
    }
    printf("The day is: %s\n", dayname);
    {
        if (day >= 1 && day <= 5)
            printf("It's a weekday.\n");
        else if (day == 6 || day == 7)
            printf("It's a weekend.\n");
        else
            printf("Invalid day input.\n");
    }
    return 0;
}