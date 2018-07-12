/*********************************************************
 * */

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1]; // pointer to a reference of a[1]
    int *q = &a[5];

    printf("p=%d *p=%d &p=%d\n", p, *p, &p);
    printf("q=%d *q=%d &q=%d\n...\n", q, *q, &q);

    printf("p == a[0] = [%d]\n", p == a[0]);
    printf("p == &a[0] = [%d]\n", p == &a[0]);
    printf("*p == a[0] = [%d]\n", *p == a[0]);
    printf("p[0] == a[0] = [%d]\n", p[0] == a[0]);

    
    return 0;
}
