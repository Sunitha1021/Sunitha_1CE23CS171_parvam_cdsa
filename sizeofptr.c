#include<stdio.h>
int main()
{
    int a=10;
    int*ptr; 
    char b='s';
    char*ptr1=&b;
    ptr=&a;
    printf("the value of a is %d\n",a);
    printf("the address of a is %u\n",&a);
    printf("the ptr is %p\n",ptr);
    printf("the size of ptr is %d\n",sizeof(ptr));
    printf("the size of ptr is %d\n",sizeof(ptr1));

    return 0;
}