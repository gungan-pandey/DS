#include<stdio.h>
#include<malloc.h>
typedef struct dlinklist
{
    int val;
    struct dlinklist *nxt;
    struct dlinklist *prev;
}dlink;
dlink * temp=NULL;
dlink * start=NULL;
dlink * end=NULL;
dlink * temp3=NULL;
dlink * temp2=NULL;
void insert_end(int x)
{
  temp=(dlink *)malloc(sizeof(dlink));
  if(temp==NULL)
  {
      printf("not allocated");
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
          end->nxt=temp;
          temp->prev=end;
          end=temp;
      }
  }

}
void insert_start(int x)
{
    temp=(dlink *)malloc(sizeof(dlink));
    if(temp==NULL)
    {
        printf("not allocated");
    }
    else
    {
        temp->val=x;
        temp->nxt=NULL;
        temp->prev=NULL;
        if(start==NULL)
        {
            end=temp;
            start=temp;
        }
        else
        {
            temp->nxt=end;
            end->prev=temp;
            start=temp;
        }
    }
}
void delete_start()
{
    temp=start;
    printf("%d",start->val);
    start=start->nxt;
    free(temp);
}
void delete_end()
{
    temp=end;
    printf("%d",end->val);
    end=end->prev;
    free(temp);
}
void insert_at_specified(int ele,int num)
{
    temp=start;
    while(temp->val!=ele)
    {
        temp=temp->nxt;
    }
    temp2=temp->nxt;
    temp3=(dlink *)malloc(sizeof(dlink));
    temp3->val=num;
    temp3->prev=temp;
    temp3->nxt=temp2;
    temp2->prev=temp3;
    temp->nxt=temp3;

}
void delete_at_specified(int x)
{
    temp=start;
    while(temp->val!=x)
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
    while(temp!=NULL)
    {
    printf("%d",temp->val);
    temp=temp->nxt;
    }
}
void display_at_end()
{
    temp=end;
    while(temp!=NULL)
    {
        printf("%d",temp->val);
        temp=temp->prev;
    }
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
