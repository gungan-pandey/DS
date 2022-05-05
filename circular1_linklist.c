#include<stdio.h>
typedef struct circular
{
    int val;
    struct circular *nxt;
}cir;
cir *f=NULL;
cir *r=NULL;
cir *temp=NULL;
void insert(int x)
{
    temp=(cir *)malloc(sizeof(cir));
    if(temp==NULL)
        printf("not allocated");
    else
    {
        temp->val=x;
        temp->nxt=f;
        if(f==NULL)
        {
            f=temp;
            r=temp;
        }
        else
        {
            r->nxt=temp;
            r=temp;

        }
    }
}
void delete()
{
    if(f==NULL)
    {
        printf("underflow");
    }
    else if(f==r)
    {
        printf("delete = %d",f->val)
        f=NULL;
        r=NULL;
    }
    else
    {
        temp=f;
        printf("delete %d",f->val);
        f=f->nxt;
        free(temp);
    }
}
void display()
{
    temp=f;
    while(temp!=r)
    {
    printf("%d",temp->val);
    temp=temp->nxt;
    }
    printf("%d",temp->val);
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
