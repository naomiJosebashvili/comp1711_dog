#include <stdio.h>
#include <string.h>

int main () {
    char inputDataType[6];
    int maxSize;
    printf("Enter a data type (int, float, double, char): ");
    scanf("%s", inputDataType);
    if ((strcmp(inputDataType, "int") == 0) || (strcmp(inputDataType, "float") == 0)) {
        maxSize = 4;
    }
    else if (strcmp(inputDataType, "double") == 0) {
        maxSize = 8;
    }
    else {
        maxSize = 1;
    }
    printf("Maximum size of %s is %d\n", inputDataType, maxSize);
    return 0;
}