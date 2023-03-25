#include<stdio.h>
void oddNatural(int n)
{
    printf("Odd natural numbers are...\n");
    for(int i=1;i<=n;i=i+2)
        printf("%d\t",i);
}
int main()
{
    int n;
    printf("Enter a number as for as want to you print odd natural number:");
    scanf("%d",&n);
    oddNatural(n);
    return 0;
}
