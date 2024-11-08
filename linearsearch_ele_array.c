#include<stdio.h>
int lin(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={2,4,0,1,9,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result=lin(arr,n,x);
    if(result!=-1)
    {
        printf("element found at index %d\n",result);        
    }
    else
    {
        printf("element not found in the array");
    }
    return 0;
}