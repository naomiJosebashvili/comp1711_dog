#include <stdio.h>
float sum (float, float); // Signiature of the function: allows you to have the function after the main

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %.2f is %.2f\n", y, z);

    return 0;
}