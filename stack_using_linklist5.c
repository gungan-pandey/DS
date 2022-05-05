#include<stdio.h>
#define max 10
typedef struct stack
{
    int val;
    struct stack *nxt;
}stk;

stk * temp=NULL;

stk* push(stk *t,int x)
{
    temp=(stk *)malloc(sizeof(stk));
    if(temp==NULL)
        printf("not allocated");
    else
    {
        temp->val=x;
        temp->nxt=t;
        t=temp;
    }
    return t;
}

stk* pop(stk* t)
{
    if(t==NULL)
           printf("underflow");
    else
    {
       temp=t;
       printf("delete %d",t->val);
       t=t->nxt;
       free(temp);
    }
    return t;

}
void display(stk* t)
{
    temp=t;
    while(temp!=NULL)
    {

        printf("\n%d",temp->val);
        temp=temp->nxt;
    }
}

int main()
{
    int ele,ch;
    stk * top=NULL;
    do{
    printf("\n 1 for insert\n 2 for delete\n 3 for display\n 4 for exit\n ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter the element");
        scanf("%d",&ele);
        top=push(top,ele);
        break;
    case 2:
        top =pop(top);
        break;
    case 3:
        display(top);
        break;
    case 4:
        break;
    }
    }while(ch<=3);
    return 0;
}
