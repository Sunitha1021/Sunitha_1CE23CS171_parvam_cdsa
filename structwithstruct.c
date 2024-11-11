#include<stdio.h>
#include<string.h>   
struct Address{
    char street[50];
    char city[50];
    char state[50];
};
struct Person{
    int age;
    char name[20];
    struct Address address;
};
int main()
{
    struct Person person;
    printf("enter the name:");
    scanf("%s",person.name);
    printf("enter age:");
    scanf("%d",&person.age);
    printf("enter street:");
    scanf("%s",person.address.street);
    printf("enter the city:");
    scanf("%s",person.address.city);
    printf("enter the state:");
    scanf("%s",person.address.state);
    printf("\nName is:%s\n",person.name);
    printf("age is:%d\n",person.age);
    printf("street is:%s\n",person.address.street);
    printf("city is:%s\n",person.address.city);
    printf("state is:%s\n",person.address.state);
    return 0;

}