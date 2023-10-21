#include <stdio.h>

int main () {

    int array[5] = {3,7,2,9,4};
    int maxElement = array[0];
    int i;
    for (i = 1; i < 5; i ++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    printf("The maximum element is %d\n", maxElement);

    return 0;
}