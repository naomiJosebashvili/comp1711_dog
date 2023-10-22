#include <stdio.h>

int main () {
    
    int numberInput;

    while (numberInput != -1) {
        printf("Enter a number or enter -1 to terminate: ");
        scanf("%d", &numberInput);
        
        if (numberInput == -1) {
            break;
        }
        else if (numberInput >= 0 && numberInput <= 100) {
            printf("The number is within range\n");
        }
        else if (numberInput > 100) {
            printf("The number is above the range\n");
        }
        else {
            printf("The number is below the range\n");
        }
    }

    return 0;
}