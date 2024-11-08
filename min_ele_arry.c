#include<stdio.h>
int main()
{
    int a[]={1,2,5,4,6};
    int min=a[0];
    
    for(int i=0;i<5;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("the min element is %d\n",min);
    return 0;
}