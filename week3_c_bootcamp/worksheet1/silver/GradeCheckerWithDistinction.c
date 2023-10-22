#include <stdio.h>

int main () {

    int markInput;
    int passMark = 50;
    int distinctionMark = 70;

    printf("Enter the student's mark: ");
    scanf("%d", &markInput);

    if (markInput >= distinctionMark) {
        printf("The student has achieved a distinction\n");
    }
    else if (markInput >= passMark) {
        printf("The student has passed\n");
    }
    else {
        printf("The student has failed\n");
    }

    return 0;
}