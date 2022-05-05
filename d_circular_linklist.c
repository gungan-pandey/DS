#include<stdio.h>
typedef struct double_circular_ll
{
    int val;
    struct double_circular_ll *nxt;
    struct double_circular_ll *prev;

}dcir;
dcir * temp=NULL;
dcir * temp2=NULL;
dcir * temp3=NULL;
dcir * start=NULL;
dcir * end=NULL;

void insert_end(int x)
{
    temp=(dcir *)malloc(sizeof(dcir));
    if(temp==NULL)
    {
        printf("no enough memory");
    }
    else
    {
         temp->val=x;
         temp->prev=NULL;
         temp->nxt=NULL;
        if(end==NULL)
        {
            end=temp;
            start=temp;
        }
        else
        {
           temp->prev=end;
           temp->nxt=start;
           end->nxt=temp;
           end=temp;
           start->prev=end;
        }
    }
}
void insert_start(int x)
{
    temp=(dcir *)malloc(sizeof(dcir));
    if(temp==NULL)
    {
        printf("no enough memory");
    }
    else
    {
         temp->val=x;
         temp->prev=NULL;
         temp->nxt=NULL;
        if(start==NULL)
        {
            end=temp;
            start=temp;
        }
        else
        {
            temp->nxt=start;
            temp->prev=end;
            start->prev=temp;
            start=temp;
            end->nxt=start;

        }
    }
}
void delete_start()
{
    temp=start;
    printf("delete %d",temp->val);
    start=start->nxt;
    start->prev=end;
    end->nxt=start;
    free(temp);
}
void delete_end()
{
    temp=end;
    printf("delete %d",temp->val);
    end=end->prev;
    end->nxt=start;
    start->prev=end;
    free(temp);
}
void insert_at_specified(int ele, int num)
{   temp=start;
    while(temp->val!=ele)
    {
        temp=temp->nxt;
    }
    temp2=temp->nxt;
    temp3=(dcir *)malloc(sizeof(dcir));
    temp3->val=num;
    temp3->nxt=temp2;
    temp3->prev=temp;
    temp->nxt=temp3;
    temp2->prev=temp3;
}
void delete_at_specified(int num)
{
    temp=start;
    while(temp->val!=num)
    {
        temp=temp->nxt;
    }
    temp2=temp->prev;
    temp3=temp->nxt;
    temp2->nxt=temp3;
    temp3->prev=temp2;

    free(temp);
}
void display_at_start()
{
    temp=start;
    while(temp->nxt!=start)
    {
        printf("%d ",temp->val);
        temp=temp->nxt;
    }
    printf("%d",temp->val);
}
void display_at_end()
{
    temp=end;
    while(temp->prev!=end)
    {
        printf("%d",temp->val);
        temp=temp->prev;
    }
    printf("%d",temp->val);
}
int main()
{
  int ele,ch,num;
  do{
    printf("enter 1 for insert start\n");
        printf("enter 2 for insert end\n");
        printf("enter 3 for delete start\n");
        printf("enter 4 for delete end\n");
        printf("enter 5 for insert at specified\n");
        printf("enter 6 for delete at specified\n");
        printf("enter 7 for display start\n");
        printf("enter 8 for display end\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter the element");
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
        display_at_start();
        break;
    case 8:
        display_at_end();
        break;
    }
   }while(ch<=8);

}
