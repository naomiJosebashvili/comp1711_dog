#include <stdio.h>

int main () {

    int temperatureInput;
    int minimumTemperature = -10;
    int maximumTemperature = 40;

    printf("Enter the temperature: ");
    scanf("%d", &temperatureInput);

    if (temperatureInput <= maximumTemperature && temperatureInput >= minimumTemperature) {
        printf("The temperature is within the range\n");
    }
    else if (temperatureInput < minimumTemperature) {
        printf("The temperature is below the range\n");
    }
    else {
        printf("The temperature is above the range\n");
    }

    return 0;
}