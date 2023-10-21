#include <stdio.h>

int main () {

    int integers[5] = {1,4,7,2,5};
    int sum = 0;
    for(int i = 0; i < 5; i ++) {
        sum += integers[i];
    }
    printf("The sum of the integers is %d\n", sum);

    return 0;
}