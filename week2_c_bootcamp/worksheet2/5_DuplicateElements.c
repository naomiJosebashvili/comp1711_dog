#include <stdio.h>

int main () {

    int array[6] = {342,4564,342,566,468};
    int duplicateElement;
    int duplicateElement1Position;
    int duplicateElement2Position;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i != j) {
                if (array[i] == array[j]) {
                    duplicateElement = array[i];
                    duplicateElement1Position = j;
                    duplicateElement2Position = i;
                }
            }
        }
    }

    printf("The duplicate element is %d at positions %d and %d in the array\n", duplicateElement, duplicateElement1Position, duplicateElement2Position);

    return 0;
}