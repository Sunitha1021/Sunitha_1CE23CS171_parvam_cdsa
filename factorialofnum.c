#include<stdio.h>
int main()
{
    int num;
    int fac=1;
    printf("enter the positive number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("give positive numbers",num);
    }
    else{
        for(int i=1;i<=num;i++){
            fac*=i;
        }
        printf("factorial of %d=%d:",num,fac);
    }
    return 0;
}