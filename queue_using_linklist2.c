#include<stdio.h>
#include<malloc.h>
typedef struct queue
{
    int val;
    struct queue *nxt;
}que;


que * temp=NULL;
que * insert(que* rear,int x)
{
    temp=(que *)malloc(sizeof(que));
    if(temp==NULL)
        printf("not allocated");
    else
    {
        temp->val=x;
        temp->nxt=NULL;
        if(rear==NULL)
            rear=temp;
        else
        {
            rear->nxt=temp;
            rear=temp;
        }
    }
    return rear;
}

que* delete(que* front)
{
    if(front==NULL)
        printf("underflow");
    else
    {
        temp=front;
        printf("delete %d",temp->val);
        front=front->nxt;
        free(temp);
    }
    return front;

}
void display(que* front,que* rear)
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->nxt;
    }

}
int main()
{
    int ele,ch;
    que * f=NULL;
    que * r=NULL;
    do
    {
        printf("enter 1 for push \n 2 for pop \n Display \n 4 exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter the element");
                scanf("%d",&ele);
                r=insert(r,ele);
                if(f==NULL)
                    f=r;
                continue;
            case 2:
                f=delete(f);
                break;
            case 3:
                display(f,r);
                break;
        }
    }while(ch<=3);
}
