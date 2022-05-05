#include<stdio.h>
int main()
{
    int i,j,arr[10],n,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }

        }
    }
    printf("shorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
    }
