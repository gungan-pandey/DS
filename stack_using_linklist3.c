#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
    int val;
    struct stack *next;
}stk;

stk *top=NULL;
stk *temp=NULL;

void push(stk *t,int x)
{
    temp=(stk*)malloc(sizeof(stk));
    if(temp==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        temp->val=x;
        temp->next=t;
        t=temp;
    }
    top=t;
}

int pop(stk  *t)
{
    int a=0;
    if(top==NULL)
        printf("Underflow\n");
    else{
        temp=t;
        a=temp->val;
        t=t->next;
        free(temp);
    }
    top=t;
    return a;
}

void display(stk *t)
{
    temp=t;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}

void main()
{
    int ele,ch,a=0;

    do{
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the number you want to insert\n");
                scanf("%d",&ele);
                push(top,ele);
                break;

            case 2:
                a=pop(top);
                printf("Delete %d",a);
                break;

            case 3:
                display(top);
        }
    }while(ch<=3);
}
