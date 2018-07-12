/*********************************************************
 * homework question 4
 * question4.c
 * */

#include <stdio.h>

int main(void)
{
    float income, tax_due;
    printf("Enter taxable income: $ ");
    scanf("%f", &income);

    if (income < 750) {
        tax_due = income * 0.01;
    
    } else if (income >= 750 && income < 2250) {
        tax_due = 7.50 + (income - 750) * 0.02;
    
    } else if (income >= 2250 && income < 3750) {
        tax_due = 37.50 + (income - 2250) * 0.03;
    
    } else if (income >= 3750 && income < 5250) {
        tax_due = 82.50 + (income - 3750) * 0.04;
    
    } else if (income >= 5250 && income < 7000) {
        tax_due = 142.50 + (income - 5250) * 0.05;
    
    } else if (income >= 7000) {
        tax_due = 230.00 + (income - 7000) * 0.06;
    }

    printf("Tax due: $ %.2f\n", tax_due);
}
