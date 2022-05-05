#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int info;
    struct stack *next;
}nodetype;

nodetype * temp=NULL;

void push(nodetype **tp,int n)
{
    nodetype *p;
    p=(nodetype *)malloc(sizeof(nodetype*));
    if(p==NULL)
    {
        printf("not  enough memory");
    }
    else
    {
        p->info=n;
        p->next=*tp;
        *tp=p;
    }
}
void pop(nodetype **tp)
{
    temp=*tp;
    printf("%d",temp->info);
    *tp=(*tp)->next;
    free(temp);
}
void display(nodetype *tp)
{

    while(tp!=NULL)
    {
        printf("%d ",tp->info);
        tp=tp->next;
    }
}
int main()
{
    nodetype* top=NULL;
    int ch,ele;
    do{
    printf("\n 1 push\n 2 pop \n 3 display\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter the element");
        scanf("%d",&ele);
        push(&top,ele);
        break;
    case 2:
        pop(&top);
        break;
    case 3:
        display(top);
        break;
    }
    }while(ch<=3);
    return 0;
}

