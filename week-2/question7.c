/*********************************************************
 * homework question 9
 * question9.c
 * */

#include <stdio.h>

double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}

int main(void) {
    double base = 5.0, height = 4.0;
    double area = triangle_area(base, height);
    printf("area = %f\n", area);
}