#include <stdio.h>

int main () {

    float numberEntered;
    printf("Enter a number: ");
    scanf("%f", &numberEntered);

    if (numberEntered > 0) {
        printf("%f is positive\n", numberEntered);
    }
    else if (numberEntered < 0) {
        printf("%f is negative\n", numberEntered);
    }
    else {
        printf("%f is zero\n", numberEntered);
    }

    return 0;
}