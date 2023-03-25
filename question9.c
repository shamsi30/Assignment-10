#include<stdio.h>
int checkDigit(int n,int d)
{
    int i;
    while(n>0)
    {
        if(n%10==d)
            return 1;
        n=n/10;
    }
    return 0;
}
int main()
{
    int n,d;
    printf("Enter the number and digit:");
    scanf("%d %d",&n,&d);
    if(checkDigit(n,d))
        printf("Yes digit is present in number");
    else
        printf("Not present");
    return 0;
}