/*********************************************************
 * homework question 3
 * question3.c
 * */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    // a
    i = 5, j = 3;
    printf("%d %d", i / j, i % j);
    printf("\n");
    // b
    i = 2, j = 3;
    printf("%d", (i + 10) % j);
    printf("\n");
    // c
    i = 7, j = 8, k = 9;
    printf("%d", (i + 10) % k / j);
    printf("\n");
    return 0;
}
