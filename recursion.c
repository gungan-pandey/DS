#include<stdio.h>
void fun(int n)
{
    if(n>=0)
    {
        printf("%d\t",n);
        fun(n-1);
    }
}
int main()
{
    fun(10);
  return 0;
}


//sum of upto n
/*
#include<stdio.h>
int s=0;
void sum(int n)
{
    if(n>=0)
    {
        s=s+n;
        sum(n-1);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    sum(n);
    printf("Sum is : %d ",s);


return 0;
}
*/

// print 1 to 10

/*
#include<stdio.h>
void fun(int i,int n)
{
    if(i<=n)
    {
      printf("%d\t",i);
      fun(i+1,n);
    }
}
int main()
{
    int n=10;
    fun(1,n);
  return 0;
}
*/
