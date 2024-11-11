#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello world";
    int start=0;
    int end=strlen(str)-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("reversed string is:%s",str);
    return 0;
}