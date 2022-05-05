#include<stdio.h>
struct student
{
    int rollno;
    int age;
    char name[10];
    int m1;
};
int main()
{
    struct student st1[10];
    int i=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&st1[i].rollno);
        scanf("%s",st1[i].name);
        scanf("%d",&st1[i].age);
        scanf("%d",&st1[i].m1);
    }

    for(i=0;i<5;i++)
    {
        printf("Roll No : %d",st1[i].rollno);
        printf("Name : %s",st1[i].name);
        printf("Age : %d",st1[i].age);
        printf("Marks : %d",st1[i].m1);
    }
    return 0;
}
