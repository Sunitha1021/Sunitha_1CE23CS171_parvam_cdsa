#include<stdio.h>
int main()
{
    int multi=0;
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        
        multi=a[i]*5;
        printf("%d\n",multi);
    }
    return 0;
}