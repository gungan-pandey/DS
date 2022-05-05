#include<stdio.h>
#define max 10
int que[max];
int insert(int ele,int r)
{
    if(r==max-1)
        printf("overflow");
    else
    {
        r++;
        que[r]=ele;
    }
    return r;
}
int delete(int f)
{
    if(f==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("delete %d",que[f]);
        f++;
    }
    return f;
}
void display(int f,int r)
{
    for(int i=f;i<=r;i++)
    {
        printf("%d",que[i]);
    }
}
int main()
{
    int ele,ch;
    int f=-1;
    int r=-1;
    do{
    printf("\n 1 for insert\n 2 for delete\n 3 for display\n 4 for exit\n ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("enter the element");
        scanf("%d",&ele);
        r=insert(ele,r);
        if(f==-1)
        {
            f=r;
        }
        break;
    case 2:
        f=delete(f);
        if(f>r)
        {
            f=-1;
            r=-1;
        }
        break;
    case 3:
        display(f,r);
        break;
    case 4:
        break;
    }

}while(ch<=3);
return 0;
}
