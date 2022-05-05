#include<stdio.h>
#define max 10
int que[max];
int f=-1;
int r=-1;

void insert(int *rare,int x)
{
    if(*rare==max-1)
        printf("overflow");
    else
    {
        (*rare)++;
        que[*rare]=x;
    }
}
void delete(int *front)
{
    if(*front==-1)
        printf("underflow");
    else
    {
        printf("delete %d",que[*front]);
        (*front)++;
    }
}
void display(int *f,int *r)
{
    for(int i=*f;i<=*r;i++)
    {
        printf("%d",que[i]);
    }

}
int main()
{
    int ele,ch;
    do{
    printf("\n 1 for insert\n 2 for delete\n 3 for display\n 4 for exit\n ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter the element");
        scanf("%d",&ele);
        insert(&r,ele);
        if(r==0)
            f=0;
        break;
    case 2:
        delete(&f);
        if(f>r)
        {
            f=-1;
            r=-1;
        }
        break;
    case 3:
        display(&f,&r);
        break;
    case 4:
        break;
    }
}while(ch<=3);
return 0;
}

