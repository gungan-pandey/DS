#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
    int val;
    struct stack *nxt;
}stk;
stk * top=NULL;
stk * temp=NULL;

void push(int x)
{
    temp=(stk *)malloc(sizeof(stk));
    if(temp==NULL)
    {
        printf("not allocted");
    }
    else
    {
        temp->val=x;
        temp->nxt=top;
        top=temp;
    }
}
int pop()
{
    int x=0;
    if(top==NULL)
        printf("Underflow ");
    else
    {
        x=top->val;
        temp=top;
        top=top->nxt;
        free(temp);
    }
    return x;
}
void display()
{
    temp=top;;
    while(temp!=NULL)
    {
        printf("\n%d",temp->val);
        temp=temp->nxt;
    }
}
int main()
{
    int ele,n,ch;
    do{
    printf("1 for push\n 2 for pop \n 3 for display \n 4 for exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter the element");
        scanf("%d",&ele);
        push(ele);
        break;
    case 2:
        ele=pop();
        printf("Deleted %d ",ele);
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    }
    }while(ch<=3);
}
