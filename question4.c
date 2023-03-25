#include<stdio.h>
void natural(int n)
{
    int i;
    printf("Natural numbers are....\n");
    for(i=1;i<=n;i++)
        printf("%d\t",i);
}
int main()
{
    int n;
    printf("Enter a number as for as you want to print natural number:");
    scanf("%d",&n);
    natural(n);
    return 0;
}