#include <stdio.h>

int main () {
    int int1;
    int int2;
    int sum;
    printf("Enter your first integer: ");
    scanf("%d", &int1);
    printf("Enter your second integer: ");
    scanf("%d", &int2);
    sum = int1 + int2;
    printf("%d + %d = %d\n", int1, int2, sum);
    return 0;
}