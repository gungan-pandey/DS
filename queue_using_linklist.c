#include<stdio.h>
#include<malloc.h>
typedef struct queue
{
   int val;
   struct que *nxt;
}que;

que *R=NULL;
que *F=NULL;
que *temp=NULL;

void insert(int x)
{
    temp=(que *)malloc(sizeof(que));
    if(temp==NULL)
        printf("not allocated");
    else
    {
        temp->val=x;
        temp->nxt=NULL;

        if(F==NULL)
        {
            F=temp;
            R=temp;
        }
        else
        {
            R->nxt=temp;
            R=temp;
        }
    }
}
void delete()
{
    if(F==NULL)
        printf("underflow");
    else
    {
        temp=F;
        printf("%d Deleted ",F->val);
        F=F->nxt;
        free(temp);
    }
}
void display()
{
    temp=F;
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
                insert(ele);
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;
            case 4:
                break;
        }
    }while(ch<=3);
}
