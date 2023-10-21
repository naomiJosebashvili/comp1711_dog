#include <stdio.h>

int main () {
    int length;
    int width;
    printf("Enter a rectangle length: ");
    scanf("%d", &length);
    printf("Enter a rectangle width: ");
    scanf("%d", &width);
    printf("The area of your rectangle is %d\n", length*width);
    return 0;
}