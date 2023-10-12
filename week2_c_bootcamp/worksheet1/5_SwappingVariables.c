#include <stdio.h> 

int main () {
    int var1;
    int var2;
    int temp;
    printf("Enter variable 1: ");
    scanf("%d", &var1);
    printf("Enter variable 2: ");
    scanf("%d", &var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("Variable 1 is %d and variable 2 is %d\n", var1, var2);
    return 0;
}