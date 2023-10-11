#include <stdio.h>
#include <string.h>

int main () {
    char userString[20];
    int stringLength;
    int i;
    printf("Enter a string to be reversed: ");
    scanf("%s", userString);
    printf("Your string reversed is: ");
    stringLength = strlen(userString);
    for(i = stringLength - 1; i >= 0; i --) {
        printf("%c", userString[i]);
    }
    printf("\n");
    return 0;
}