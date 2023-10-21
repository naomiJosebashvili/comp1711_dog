#include <stdio.h>

int main () {

    int array[5] = {1,2,3,4,5};
    int reversedArray[5];
    int i;
    int j;
    for (i = 0; i < 5; i ++) {
        reversedArray[4 - i] = array[i];
    }
    for (j = 0; j < 5; j ++){
        printf("%d\n", reversedArray[j]);
    }

    return 0;
}