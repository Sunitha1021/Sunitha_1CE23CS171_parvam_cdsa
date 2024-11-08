#include<stdio.h>
int main()
{
    int a[]={1,2,5,4,6};
    int max=a[0];
    
    for(int i=0;i<5;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("the max element is %d\n",max);
    return 0;
}