#include <stdio.h>
int main()
{
    int Time;
    int hours;
    int minutes;
    int secs;
    printf("Enter time Input:\n");
    scanf("%d", &Time);
    hours = Time / 3600;
    minutes = (Time % 3600) / 60;
    secs = Time % 60;
    printf("Output:%d: %d: %d\n", hours, minutes, secs);

    return 0;
}
