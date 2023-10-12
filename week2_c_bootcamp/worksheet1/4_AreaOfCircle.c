#include <stdio.h>

int main () {
    double radius;
    double area;
    printf("Input the radius of your circle: ");
    scanf("%lf", &radius);
    area = radius * radius * 3.14159265;
    printf("The area of the circle is: %f\n", area);
    return 0;
}