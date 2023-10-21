#include <stdio.h>

int main () {
    int input;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &input);
    for (int i = input; i > 1; i--) {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %d\n", input, factorial);
    return 0;
}