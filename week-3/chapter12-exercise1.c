/*********************************************************
 * */

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1]; // pointer to a reference of a[1]
    int *q = &a[5];

    printf("p=%d *p=%d &p=%d\n", p, *p, &p);
    printf("q=%d *q=%d &q=%d\n", q, *q, &q);

    printf("*(p+3) = [%d]\n", *(p+3));
    printf("*(q-3) = [%d]\n", *(q-3));
    printf("q-p = [%ld]\n", q-p);
    printf("p < q = [%d]\n", p<q);
    printf("*p < *q = [%d]\n", *p<*q);
    
    return 0;
}
