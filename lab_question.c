/*
#include<stdio.h>
#include<math.h>
#define max 100
int armstrong(int a,int c)
{
    int rem=0,sum=0;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+(int)pow(rem,c);
        a=a/10;
    }
    return sum;
}
int count(int e)
{   int f=0;
    while(e!=0)
    {
        e=e/10;
        f++;
    }
    return f;
}
int main()
{
    int n,arr[max],b;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        int p=arr[i];
        int c=count(p);
        int b=armstrong(p,c);
        if(p==b)
        {
            printf("armstrong number are %d",p);
        }
    }
    return 0;

}
*/

#include<stdio.h>
#include<math.h>
#define max 100
void armstrong(int arr1[],int n)
{
    int rem=0,sum=0,i=0,orignal,c;
    for(i=0;i<n;i++)
    {
        orignal=arr1[i];
        c=count(arr1[i]);
        sum=0;
        while(orignal!=0)
        {
            rem=orignal%10;
            sum+=(int)pow(rem,c);
            orignal/=10;
        }
        if(sum==arr1[i])
            printf(" \n%d armstrong number are",sum);
        else
            printf("\n %d is not a armstrong number ",sum);
    }
}
int count(int c)
{
    int d=0;
    while(c!=0)
    {
        c=c/10;
        d++;
    }
    return d;
}
int main()
{
    int n,arr[max],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    armstrong(arr,n);
    return 0;
}
