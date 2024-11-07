#include<stdio.h>
int main()
{
    int n;
    printf("enter any integers:");
    scanf("%d",&n);
    printf("fibanocci series:");
    for(int i=0;i<=n;i++)
    {
        printf("%d",fibbo(i));
    }
    return 0;

}
int fibbo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibbo(n-1)+fibbo(n-2);
    }
}
