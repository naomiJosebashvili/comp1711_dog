#include <stdio.h>

int main () {
    int inputInteger;
    printf("Enter an integer: ");
    scanf("%d", &inputInteger);
    if (inputInteger % 2 == 0) {
        printf("%d is even\n", inputInteger);
    }
    else {
        printf("%d is odd\n", inputInteger);
    }
    return 0;
}