/**
 * Zahid Mahir
 * Print the temperatures from -50 to 100 degress fahreheit
 * 
 * F = 1.8 C + 32
 * */

#include <stdio.h>

double get_fahreheit(double celsius) {
    return (double) 1.8 * celsius + 32;
}

int main() {
    for(double i = 100; i >= -50; i-=5) {
        printf("%.2f C = %.2f F\n", i, get_fahreheit(i));
    }
    return 0;
}

