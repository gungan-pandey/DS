#include<stdio.h>
#define max 10
int que[max];
void insert(int ele,int *f,int *r)
{
    if(*r==max-1)
    {
        printf("overflow");
    }
    else
        if(*f==-1)
           {
               (*f)++;
           }
        (*r)++;
        que[*r]=ele;

}
void delete(int *f,int *r)
{
    if(*f==-1)
        printf("underflow");
    else
    {
        printf("delete %d",que[*f]);
       (*f)++;
        if(f>r)
            {
                f=-1;
                r=-1;
            }

    }

}
void display(int *f,int *r)
{
    for(int i=f;i<=r;i++)
    {
        printf("%d",que[i]);
    }
}
int main()
{
    int f=-1,r=-1;
    int ch,ele;
    do{
        printf(" \nEnter \n 1 for insert \n2 for delete p \n3 for Display \n 4 exit\n");
        scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("enter the element");
        scanf("%d",&ele);
        insert(ele,&f,&r);
        break;
    case 2:
        delete(&f,&r);
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

