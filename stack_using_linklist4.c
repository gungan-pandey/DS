#include<stdio.h>
#include<conio.h>
#define max 10
typedef struct stack
{
    int val;
    struct stack *nxt;
}stk;

stk *top=NULL;
stk *temp=NULL;


