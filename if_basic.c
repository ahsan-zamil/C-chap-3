//C program to check whether no  is even or odd
#include<stdio.h>

int main(){
    int a, b;
    printf("enter a no\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("no is even\n");
    }
    else{
        printf("no is odd\n");
    }
    return 0;
}