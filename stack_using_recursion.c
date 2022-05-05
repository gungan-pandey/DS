#include<stdio.h>
#include<conio.h>
#define max 10
int stack[max];


void push(int *t,int x)
{
if(*t==max-1)
        printf("overflow");
else
    (*t)++;
    stack[*t]=x;

}
void pop(int *t)
{
   if(*t==-1)
        printf("underflow");
    else
    {
        printf("delletd %d",stack[*t]);
        (*t)--;
    }
}
void display(int t)
{
    for(int i=t;i>=0;i--)
    {
        printf("%d",stack[i]);
    }

}
void main()
{
    int ele,ch;
    int t=-1;
    do
    {
        printf("\nEnter 1 for push \n2 for pop \n3 for Display \n 4 exit ");
        scanf("%d",&ch);


    switch(ch)
    {
        case 1:
                printf("enter element\t");
                scanf("%d",&ele);
                push(&t,ele);
                break;

        case 2:
                pop(&t);
                break;

        case 3:
                display(t);
                break;
        case 4 :
                break;

    }
}while(ch<=3);
}
