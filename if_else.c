#include<stdio.h>

int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if(age>=90)
    {
printf("you are above 90, you cannot drive\n");
    }
    else{
        printf("you can drive\n");
    }
    return 0;
}