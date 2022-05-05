#include<stdio.h>
#include<malloc.h>

typedef struct queue
{
    int val;
    struct queue *nxt;
}que;

que *f=NULL;
que *r=NULL;
que *temp=NULL;

void insert(que *rear,int x)
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
    r=rear;
    }
}

int delete(que *front)
{
    int k=0;
    if(front==NULL)
        printf("underflow");
    else
    {
        k=front->val;
        temp=front;
        front=front->nxt;
        free(temp);
    }
    f=front;
    return k;
}
void display(que *front,que *rear)
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->nxt;
    }
}
void main()
{
    int ele,ch;

    do{
        printf("Enter 1 for insert\n");
        printf("Enter 2 for delete\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the number you want to insert\n");
                scanf("%d",&ele);
                insert(r,ele);
                if(f==NULL)
                    f=r;
                break;

            case 2:
                ele=delete(f);
                if(ele!=0)
                    printf("Deleted Ele is %d ",ele);
                break;

            case 3:
                display(f,r);
                break;
            case 4:
                break;
        }
    }while(ch<=3);
}
