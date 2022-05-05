//find factor of number
/*
#include<stdio.h>
void fact(int i,int n)
{
  if(i<=n)
  {
      if(n%i==0)
           printf("%d\t",i);

      fact(i+1,n);

  }

}
int main()
{
    int n;
    printf("enter number ");
    scanf("%d",&n);
    fact(1,n);
}
*/
//count factor of a number
/*
#include<stdio.h>
int j=0;
void fact(int i,int n)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            j++;
            printf("%d",i);
        }
        fact(i+1,n);
    }
}

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    fact(1,n);
    printf("\n count ");
    printf("%d",j);
}
*/

//sum of digits
/*
#include<stdio.h>
int rem=0,sum=0;
void digit_sum(int n)
{
    if(n!=0)
    {
        rem=n%10;
        sum+=rem;
        digit_sum(n/10);
    }
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    digit_sum(n);
    printf("%d",sum);
}
*/

//trybo series
/*
#include<stdio.h>
void trybo(int a,int b,int c,int n)
{
    int d=a+b+c;
    if(d<=n)
    {
        printf("%d\t",d);
        trybo(b,c,d,n);
    }

}
int main()
{
    int n;
    printf("0\t");
    printf("1\t");
    printf("2\t");
    trybo(0,1,2,20);

}
*/

//sum of digit upto single digit


#include<stdio.h>
int n=0;
void digit_sum(int num,int sum)
{
    n=num;
    if(num>9)
    {
        while(num!=0)
        {
            int rem=num%10;
            sum+=rem;
            num/=10;
        }
        digit_sum(sum,0);
    }
}
int main()
{
    scanf("%d",&n);
    digit_sum(n,0);
    printf("%d",n);
}

