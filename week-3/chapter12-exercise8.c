/*********************************************************
 * Sums an array
 * */

#include <stdio.h>

/* 
store zeros in all elements of a
*/
void store_zeros(int *a, int n);

void store_zero(int *a, int n)
{
    int *end = a + n;
    
    while(a < end)
    {
        *a = 0;
        a++;
    }
}

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int n = sizeof(a) / sizeof(a[0]);

    store_zero(&a[0], n);

    int i;
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
