#include<stdio.h>
int rectangle()
{
    float area;
    float l,b,h;
    printf("enter the length,breadth,height:");
    scanf("%f%f%f",&l,&b,&h);
    area=l*b*h;
    printf("%f",area);
}
int main()
{
    rectangle();
    return 0;
}