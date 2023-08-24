#include <stdio.h>

int main()
{
    float tax=0, income;
    printf("enter your income\n");
    scanf("%f", &income);
    if (income <= 250000)
    {
        printf("no tax\n");
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = tax+0.05*(income-250000);
        printf("tax to pay is %f", tax);
    }
    else if (income >500000 && income <= 1000000)
    {
        tax = tax+0.2*(income-500000);
        printf("tax to pay is %f", tax);
    }
    else if (income > 1000000)
    {
        tax = tax+0.3*(income-1000000);
        printf("tax to pay is %f", tax);
    }
    return 0;
}