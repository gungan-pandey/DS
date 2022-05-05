#include<stdio.h>
int main()
{

    int arr[10],i,n,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n");
    int j=0;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)
        {
            arr[j+1]=arr[j];

        }
        j++;
        arr[j]=temp;

    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

