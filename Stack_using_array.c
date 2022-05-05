#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX];
int top= -1;
void push(int);
void pop();
void display();

void push(int x)
{
    if(top==MAX-1)
    {
        printf("stack overflow");

    }
    else
    {
        top++;
        stack[top]=x;
    }

}
void pop()
{
    if(top==-1)
        printf("underflow");
    else
    {
        printf("delletd %d",stack[top]);
        top--;
    }
}
void display()
{
    for( int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
void main()
{
    int ele,ch;
    do
    {
        printf("enter 1 for push \n 2 for pop \n Display \n 4 exit ");
        scanf("%d",&ch);


    switch(ch)
    {
        case 1:
                printf("enter element\t");
                scanf("%d",&ele);
                push(ele);
                break;

        case 2:
                pop();
                break;

        case 3:

                display();
                break;
        case 4 :
                break;

    }
}while(ch<=3);
    }
