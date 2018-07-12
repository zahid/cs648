/*********************************************************
 * swaps variables via pointers
 * */

#include <stdio.h>

void swap(int *p, int *q); /* exchanges values of p and q */

void swap(int *p, int *q)
{
    int z = *p;
    *p = *q;
    *q = z;
}

int main(void)
{
    int i = 5;
    int j = 4;

    printf("i = %d j = %d\n", i, j);

    swap(&i, &j);
    
    printf("i = %d j = %d\n", i, j);

    return 0;
}
