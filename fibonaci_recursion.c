/*
#include<stdio.h>
void fibo(int a,int b,int n)
{
    int c=a+b;
    if(c<=n)
    {
        printf("%d\t",c);
        fibo(b,c,n);
    }

}
int main()
{
    int n;
    printf("0\t");
    printf("1\t");

    fibo(0,1,15);
}
*/

#include<stdio.h>
int s=0;
void fibo(int a,int b,int n)
{
    int c=a+b;
    if(s!=n)
    {
        s++;
        printf("%d\t",c);
        fibo(b,c,n);
    }

}
int main()
{
    int n;
    printf("0\t");
    printf("1\t");

    fibo(0,1,15);
}
