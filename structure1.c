#include<stdio.h>
#include<string.h>
 typedef struct student
{
  int rollno;
  char name[100];
  int cls;
}std;
int main()
{
    std s1,s2;
    printf("enter information about first student\n");
    printf("\n enter rollno");
    scanf("%d",&s1.rollno);
    printf("\n enter name\t");
    fflush(stdin);
    gets(s1.name);
    printf("\n enter class\t");
    scanf("%d",&s1.cls);

    printf("enter information about second student\n");
    printf("enter roll_no \t");
    scanf("%d",&s2.rollno);
    printf("enter name\n");
    fflush(stdin);
    gets(s2.name);
    printf("enter class\t");
    scanf("%d",&s2.cls);


     printf("enter information about first student\t");
     printf("%d\t",s1.rollno);
     puts(s1.name);
     printf("%d\t",s1.cls);

     printf("\nenter information about second student\t");
     printf("%d\t",s2.rollno);
     puts(s2.name);
     printf("%d\t",s2.cls);

     return 0;

}
