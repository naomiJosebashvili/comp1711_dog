#include <stdio.h>

int main () {
    double speed = 300000000;
    int secondsInADay = 24 * 60 * 60;
    long long int distance;
    int days;
    printf("Enter a number of days: ");
    scanf("%d", &days);
    distance = speed * secondsInADay * days;
    printf("Light travels %lld metres in %d days\n", distance, days);
    return 0;
}