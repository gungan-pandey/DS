#include<stdio.h>
struct student
{
    int rollno;
    int age;
    char name[10];
    int m1;
};

void printStructure(struct student stk[])
{
    for(int i=0;i<5;i++)
    {
        printf("\nRoll No : %d",stk[i].rollno);
        printf("\nName : %s",stk[i].name);
        printf("\nAge : %d",stk[i].age);
        printf("\nMarks : %d",stk[i].m1);
    }
}

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
    printStructure(st1);
    return 0;
}
