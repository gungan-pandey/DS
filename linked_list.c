#include<stdio.h>
#include<malloc.h>
typedef struct linked_list
{
    int val;
    struct linked_list *nxt;
}link;
link *temp=NULL;
link *temp2=NULL;
link *start=NULL;
link *end=NULL;
void insert_start(int x)
{
    temp=(link*)malloc(sizeof(link));
    if(temp==NULL)
        printf("memory is not allocated");
    else
    {
        temp->val=x;
        temp->nxt=start;
        if(start==NULL)
        {
            start=temp;
            end=temp;
        }
        else
        {
            start=temp;
        }

    }
}
void insert_end(int x)
{
    temp=(link*)malloc(sizeof(link));
    if(temp==NULL)
        printf("memory is not allocated");
    else
    {
        temp->val=x;
        temp->nxt=NULL;
        if(end==NULL)
        {
            end=temp;
            start=temp;
        }
        else
        {
            end->nxt=temp;
            end=temp;
        }
    }

}
 void delete_start()
 {
     if(start==NULL)
        printf("underflow");
     else
     {
         temp=start;
        printf("%d",temp->val);
        start=start->nxt;
        free(temp);
     }
 }
 void delete_end()
 {
     temp=start;
     while(temp->nxt!=end)
        temp=temp->nxt;

    printf("delete %d",end->val);
    temp->nxt=NULL;
    end=temp;
 }
 void insert_at_specified(int num,int x)
 {
     temp=start;
     temp2=(link*)malloc(sizeof(link));
     while(temp->val!=num)
     {
         temp=temp->nxt;
     }
     temp2->val=x;
     temp2->nxt=temp->nxt;
     temp->nxt=temp2;
}

void delete_at_specified(int num)
{
    temp=start;
    temp2=start;
    while(temp->val!=num)
    {
        temp2=temp;
        temp=temp->nxt;
    }
    temp2->nxt=temp->nxt;
    free(temp);
}
void display()
{
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->nxt;
    }
}
 int main()
 {
     int ele,ch;
     int num=0;
    do
    {
        printf("enter 1 for insert start\n");
        printf("enter 2 for insert end\n");
        printf("enter 3 for delete front\n");
        printf("enter 4 for delete rear\n");
        printf("enter 5 for insert at specified\n");
        printf("enter 6 for delete at specified\n");
        printf("enter 7 for display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("enter the number");
            scanf("%d",&ele);
            insert_start(ele);
            break;
        case 2:
            printf("enter the number ");
            scanf("%d",&ele);
            insert_end(ele);
            break;
        case 3:
            delete_start();
            break;
        case 4:
            delete_end();
            break;
        case 5:
            printf("enter the number [position] ");
            scanf("%d",&ele);
            printf("enter the number [new node] ");
            scanf("%d",&num);
            insert_at_specified(ele,num);
            break;
        case 6:
            printf("enter the number ");
            scanf("%d",&num);
            delete_at_specified(num);
            break;
        case 7:
            display();
            break;
        }
    }while(ch<=7);
}


