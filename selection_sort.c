#include<stdio.h>
int main()
{
    int arr[20],i,j,val,pos,n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        val=arr[i];
        for(j=i+1;j<n;j++)
        {
        if(val>arr[j])
        {

            pos=j;
            val=arr[j];
        }

        }
    if(pos!=i)
    {
       arr[pos]=arr[i];
       arr[i]=val;

    }
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
