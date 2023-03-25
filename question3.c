#include<stdio.h>
int check(int n)
{
    return n%2==0;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(check(n)==1)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}