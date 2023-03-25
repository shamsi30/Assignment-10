#include<stdio.h>
float area(float r)
{
    return 3.14*r*r;
}
int main()
{
    float r;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    printf("Area of circle are %.1f",area(r));
    return 0;
}