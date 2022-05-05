#include<stdio.h>
#define max 10
int f=-1;
int R=-1;
int queue[max];
void insert(x);
void display();
void delete();

void intsert(int x)
{
    if(R==max-1)
    {
        printf("overflow");
    }
    else{

       if(f==-1)
          f++;
       R++;
       queue[R]=x;
    }
}
void delete()
{
    if(f==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("delete %d",queue[f]);
        f++;
    if(f>R)
    {
        f=-1;
        R=-1;
    }

}
}

void display()
{
    for( int i=f;i<=R;i++)
    {
        printf("%d",queue[i]);
    }
}

int main()
{
    int ch,ele;
    do{
    printf("1: insert\n 2: delete\n 3: display \n 4: exit\t");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 :
        printf("enter the element");
        scanf("%d",&ele);
        intsert(ele);
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
return 0;
}

