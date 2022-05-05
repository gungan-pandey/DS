#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
   int val;
   struct stack *nxt;
}stk;
stk * temp=NULL;
stk * top=NULL;

void push(int x)
{
    temp=(stk *)malloc(sizeof(stk));
    if(temp==NULL)
    {
        printf("not allocated");
    }
    else
    {
        temp->val=x;
        temp->nxt=top;
        top=temp;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("underflow");
    }
    else
    {
        temp=top;
        printf("delete %d",top->val);
        top=top->nxt;
    free(temp);
    }
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d",temp->val);
        temp=temp->nxt;
    }
}
int main()
{
    int ch,ele;
     do
    {
        printf("enter 1 for push \n 2 for pop \n 3 Display \n 4 exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter the element");
                scanf("%d",&ele);
                push(ele);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
    }while(ch<=3);
    return 0;
}
