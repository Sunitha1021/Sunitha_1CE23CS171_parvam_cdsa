#include<stdio.h>
int binarysearch(int arr[],int size,int target){//arr 9 8
    int left=0;
    int right=size-1;//8
    while(left<=right){//0<8
        int mid=left+(right-left)/2;//0+(8-0)/2=4
        if(arr[mid]==target){//8==8
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;//4+1=5<8 true,//6<8 true,//7<8 true,//8<8 false
        }
        else{
            right=mid-1;//4-1=3>8 false 
        }
    }
    return -1;//target not found
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=8;
    int result=binarysearch(arr,sizeof(arr)/sizeof(arr[0]),target);// arr 9,8
    printf("element found at index:%d \n",result);//arr[7]
    return 0;
}
