//Program to find if a stack is empty or not

#include <stdio.h>
#include <stdlib.h>
//implimentation of stack
struct stack
{
    int size;
    int top;
    int *arr;
};

//function to check stack is empty or not
int isempty(struct stack *sp)
{
    if(sp->top==-1)
    printf("Empty");
    else
    printf("Not empty");
}

int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));//assigning size in heap
    isempty(sp);//function calling
    return 0;
}
