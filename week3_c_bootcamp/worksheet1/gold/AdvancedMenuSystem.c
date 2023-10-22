#include <stdio.h>

int main () {

    char optionInput;

    printf("Enter an option from the menu below: \n");
    printf("A: Log out\nB: Change username\nC: Change password\nD: Change profile picture\nE: Delete account\n");
    scanf("%c", &optionInput);

    switch (optionInput) {
        case 'A': printf("Option A has been selected\n");
            break;
        case 'B': printf("Option B has been selected\n");
            break;
        case 'C': printf("Option C has been selected\n");
            break;
        case 'D': printf("Option D has been selected\n");
            break;
        case 'E': printf("Option E has been selected\n");
            break;
        default: printf("That option is invalid\n");
            break;
    }

    return 0;
}