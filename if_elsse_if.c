#include <stdio.h>

int main()
{
    int no;
    printf("enter your no\n");
    scanf("%d", &no);
    if (no == 1)
    {
        printf("your no is 1\n");
    }
    else if (no == 2)
    {
        printf("your no is 2\n");
    }
    else if (no == 3)
    {
        printf("your no is 3\n");
    }
    else
    {
        printf("its not 1,2,3!\n");
    }
    return 0;
}