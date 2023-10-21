#include <stdio.h>

int main () {

    int array[5] = {1,2,3,4,5};
    int rotatedArray[5];
    int j;
    for (int i = 0; i < 5; i ++) {
        if (i >= 4) {
            j = i - 4;
        }
        else {
            j = i + 1;
        }
        rotatedArray[j] = array[i];
    }
    for (int k = 0; k < 5; k ++) {
        printf("%d\n", rotatedArray[k]);
    }

    return 0;
}