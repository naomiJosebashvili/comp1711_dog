#include <stdio.h>

int main () {
    float tempFarenheit;
    float tempCelcius;
    printf("Enter a temperature in farenheit: ");
    scanf("%f", &tempFarenheit);
    tempCelcius = (tempFarenheit - 32) / 1.8;
    printf("%f farenheit is %f celcius\n", tempFarenheit, tempCelcius);
    return 0;
}