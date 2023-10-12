#include <stdio.h>

int main () {
    int principal;
    float rate;
    int years;
    float finalAmount;
    printf("Enter principal: ");
    scanf("%d", &principal);
    printf("Enter percentage rate: ");
    scanf("%f", &rate);
    printf("Enter number of years: ");
    scanf("%d", &years);
    finalAmount = principal + rate * principal * years / 100;
    printf("The amount after %d years is %f\n", years, finalAmount);
    return 0;
}