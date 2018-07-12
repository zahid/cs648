/*********************************************************
 * homework question 4
 * question4.c
 * */

#include <stdio.h>

int main(void)
{
    int i = 9384;
    do {
        printf("%d", i);
        printf("\n");
        i /= 10;
    } while (i > 0);
}
