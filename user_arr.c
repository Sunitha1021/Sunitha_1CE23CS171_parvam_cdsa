#include<stdio.h>

int main()
{
    int n;
    printf("enter the no of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter 5 elements");
    for(int i=0;i<n;i++)
    {
     scanf("%d\n",&arr[i]);
    } 
    printf("the arr elements are:");
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
   
}