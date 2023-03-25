#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int Arrange(int n,int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d %d",&n,&r);
    printf("Arrangement=%d",Arrange(n,r));
    return 0;
}