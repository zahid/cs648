/*********************************************************
 * Sums an array
 * */

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
    {
        *sum += a[i];
    }
    *avg = *sum /n;
}

int main(void)
{
    double numbers[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 0.0};
    int length = 10;
    double average = 0.0;
    double total_sum = 0.0;
    printf("average = %f\n", average);
    // pass a reference to the variables to this function as arguments
    avg_sum(numbers, length, &average, &total_sum);
    printf("average = %f\n", average);

    return 0;
}
