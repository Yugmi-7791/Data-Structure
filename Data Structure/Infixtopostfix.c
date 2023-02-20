#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *sp)
{
    if(sp->top==-1)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}

int isfull(struct stack *sp)
{
    if(sp->top==sp->size-1)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}

void push(struct stack *sp,int val)
{
    if(isfull(sp))
    {
        printf("Stack oberflow\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=val;
    }
}

int pop(struct stack *sp)
{
    if(isempty(sp))
    {
        printf("Stack underflow");
        return -1;
    }
    else
    {
        int val=sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

int stacktop(struct stack *sp){
    return sp->arr[sp->top];
}

int precedence(char ch)
{
    if(ch == '*' || ch =='/')
    return 2;
    else if(ch=='+' || ch=='-')
    return 1;
    else return 0;

}

int isoperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
    return 1;
    else
    return 0;
}

char *infixtopostfix(char* infix)
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else
        {
            if(precedence(infix[i])>precedence(stacktop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while (!isempty(sp))
    {
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;  
}

int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=2;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    char *infix="a+b*c-d/5";
    printf("postfix = %s",infixtopostfix(infix));

 
    return 0;
}