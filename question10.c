#include<stdio.h>
void primeFactor(int n)
{
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
    }
}
int main()
{
    int n;
    printf("Enter a number for find prime factor:");
    scanf("%d",&n);
    primeFactor(n);
    return 0;
}