/*********************************************************
 * homework question 2
 * question2.c
 * Print formatted numbers
 * */

#include <stdio.h>

int main(void)
{
    printf("%6d,%4d", 86, 1040);
    // outputs:     86,1040
    printf("\n");
    printf("%12.5e", 30.253);
    // outputs: 3.02530e+01
    printf("\n");
    printf("%.4f",83.162); 
    // outputs: 83.1620
    printf("\n");
    printf("%-6.2g", .0000009979);
    // outputs: 1e-06 
    printf("\n");
    return 0;
}
