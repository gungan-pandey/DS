#include<stdio.h>
int main()
{
    int rollno[20],marks[20],n,temp,i,j,temp1;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter rollno:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&rollno[i]);
    }
    printf("enter  marks:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(marks[i]>marks[j])
            {
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;


                temp1=rollno[i];
                rollno[i]=rollno[j];
                rollno[j]=temp1;
            }
        }
    }

    printf("\rollno/t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",rollno[i]);
    }
    printf("\n");
    printf("marks:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",marks[i]);
    }
    printf("\n");
   return 0;
}
