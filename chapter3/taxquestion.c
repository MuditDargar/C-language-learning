#include <stdio.h>
int main()
{
    float income;
    printf("enter your income :-");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("then your income after tax deduction is %f", income);
    }

    else if (income >= 250000 && income <= 500000)
    {
        printf("then your income after tax deduction is %f ", income - (income * 0.05));
    }

    else if (income > 500000  && income <= 1000000)
    {
        printf("then your income after tax deduction is %f ", income - (income * 0.2));
    }

    else if (income > 1000000)
    {
        printf("then your income after tax deduction is %f ", income - (income * 0.3));
    }
    return 0;
}