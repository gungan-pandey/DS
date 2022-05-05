#include<stdio.h>
#include<malloc.h>
struct student
{
    int rollno;
    int age;
}*s1;
void main()
{
    s1=(struct student *)malloc(sizeof(struct student));
    printf("enter the rollno.\n");
    scanf("%d",&s1->rollno);
    printf("enter the age\n");
    scanf("%d",&s1->age);
    printf("the roll no of the student is:%d\n",s1->rollno);
    printf("the age of the student is :%d",s1->age);

}
