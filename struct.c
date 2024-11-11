#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int age;
        char name[20];
        float marks;
    };
    struct student s1;
    printf("enter the name\n");
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")]=0;
    printf("enter marks\n");
    scanf("%f",&s1.marks);
    printf("enter age\n");
    scanf("%d",&s1.age);
    printf("age is:%d\n",s1.age);
    printf("name is :%s\n",s1.name);
    printf("marks is:%.2f\n",s1.marks);
    return 0;
}
