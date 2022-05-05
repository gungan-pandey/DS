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
        printf(" not allocated\n");
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
        printf("underflow");
    else
    {
        temp=top;
        printf("Deleted Element is %d",top->val);
        top=top->nxt;
    free(temp);
    }
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("\n%d",temp->val);
        temp=temp->nxt;
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
