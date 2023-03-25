#include<stdio.h>
float simpleInt(float p,float r, float t)
{
    return p*r*t/100;
}
int main()
{
    int p,r,t;
    printf("Enter p,r and t:");
    scanf("%d %d %d",&p,&r,&t);
    printf("Simple intrest is %.1f",simpleInt(p,r,t));
    return 0;
}