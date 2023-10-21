#include <stdio.h>

int main () {
    int N = 6;
    char myString[] = "Hello";

    int i = 0;
    while (N - i >= 0) {
        printf("%c\n", myString[N-i]);
        i++;
    }
    return 0;
}