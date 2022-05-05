/*

#include<stdio.h>
take_input(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }

}
print_array(int *p,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }
}
int main()
{
    int n,i,*p;
    printf("enter the size of array");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    take_input(p,n);
    print_array(p,n);

}
*/

#include<stdio.h>
#include<stdlib.h>
#define max 100
take_input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
print_array(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[max];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    take_input(arr,n);
    print_array(arr,n);
}
