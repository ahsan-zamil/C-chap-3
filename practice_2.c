#include <stdio.h>

int main()
{
    float phy, chem, maths;
    float total;
    printf("enter phy marks\n");
    scanf("%f", &phy);
    printf("enter chem marks\n");
    scanf("%f", &chem);
    printf("enter maths marks\n");
    scanf("%f", &maths);
    total = (phy + chem + maths) / 3;
    if ((total < 40) || phy < 33 || chem < 33 || maths < 33)
    {
        printf("your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("your total percentage is %f and you are pass\n", total);
    }
    return 0;
}