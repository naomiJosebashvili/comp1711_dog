#include <stdio.h>

int main () {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 4 == 0 && number % 5 == 0) {
        printf("%d is divisible by both 4 and 5\n", number);
    }
    else if (number % 4 == 0) {
        printf("%d is divisible by 4 but not 5\n", number);
    }
    else if (number % 5 == 0) {
        printf("%d is divisible by 5 but not 4\n", number);
    }
    else {
        printf("%d is neither divisible by 4 nor 5\n", number);
    }

    return 0;
}