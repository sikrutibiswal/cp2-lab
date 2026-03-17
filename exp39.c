#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct Time t1, t2, sum;

    printf("Enter first time:\n");
    printf("Hours: ");
    scanf("%d", &t1.hours);
    printf("Minutes: ");
    scanf("%d", &t1.minutes);
    printf("Seconds: ");
    scanf("%d", &t1.seconds);
 printf("\nEnter second time:\n");
    printf("Hours: ");
    scanf("%d", &t2.hours);
    printf("Minutes: ");
    scanf("%d", &t2.minutes);
    printf("Seconds: ");
    scanf("%d", &t2.seconds);

    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = sum.seconds / 60;
    sum.seconds = sum.seconds % 60;

    sum.minutes = sum.minutes + t1.minutes + t2.minutes;
    sum.hours = sum.minutes / 60;
    sum.minutes = sum.minutes % 60;

    sum.hours = sum.hours + t1.hours + t2.hours;

    printf("\nTime = %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}
