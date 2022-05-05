#include<stdio.h>
#include<string.h>
struct student
{
  int rollno;
  char name[10];
  int cls;
}s1;
int main()
{
    struct student s2;
    printf("enter information about first student\n");
    printf("\n enter rollno");
    scanf("%d",&s1.rollno);
    printf("\n enter name\t");
    scanf("%s",&s1.name);
    printf("\n enter class\t");
    scanf("%d",&s1.cls);

    printf("enter information about second student\n");
    printf("enter roll_no \t");
    scanf("%d",&s2.rollno);
    printf("enter name\n");
    scanf("%s",&s2.name);
    printf("enter class\t");
    scanf("%d",&s2.cls);


     printf("enter information about first student");
     printf("%d",s1.rollno);
     printf("%s",s1.name);
     printf("%d",s1.cls);

     printf("enter information about second student");
     printf("%d",s2.rollno);
     printf("%s",s2.name);
     printf("%d",s2.cls);

     return 0;

}
