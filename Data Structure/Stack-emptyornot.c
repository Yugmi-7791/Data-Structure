#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

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
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    isempty(sp);
    return 0;
}