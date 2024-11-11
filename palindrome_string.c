#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="madam";
    int start=0;
    int end=strlen(str)-1;
    char temp;
    char org[20];
    strcpy(org,str);
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    if(strcmp(org,str)==0){
    printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}