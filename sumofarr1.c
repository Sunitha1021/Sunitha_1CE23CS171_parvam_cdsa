#include<stdio.h>
int main()
{
    int sum=0;
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        
        sum=a[i]+5;
        printf("%d\n",sum);
    }
    return 0;
}