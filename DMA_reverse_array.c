#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("how many number you wants to enter");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("\n enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("array in reverse order :\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }
    return 0;
}
