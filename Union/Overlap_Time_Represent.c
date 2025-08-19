#include <stdio.h>

union Time {
    struct Time1 {
        int hours;
        int minutes;
    } t1;
    struct Time2 {
        float totalHours;
    } t2;
} t;

int main() {
    printf("Enter an hour: \n");
    scanf("%d", &t.t1.hours);

    printf("Enter a minute: \n");
    scanf("%d", &t.t1.minutes);

    printf("%d is hours, %d is minutes.\n", t.t1.hours, t.t1.minutes);
    printf("%f is total hours.\n", t.t2.totalHours);

    return 0;
}
