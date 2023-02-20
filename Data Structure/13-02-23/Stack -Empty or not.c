//Program to check if a stack is empty or not

#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int size;
  int top;
  int *arr;
};

//function to find if stack is empty or not
int
isEmpty (struct stack *ptr)
{
  if (ptr->top == -1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

//function to find if stack is full or not
int
isFull (struct stack *ptr)
{
  if (ptr->top == ptr->size - 1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

//program will print empty
int
main ()
{
  struct stack *s = (struct stack *) malloc (sizeof (struct stack));
  s->size = 80;
  s->top = -1;
  s->arr = (int *) malloc (s->size * sizeof (int));

  if (isEmpty (s))
    {
      printf ("Empty");
    }
  else
    {
      printf ("not empty");
    }
  return 0;
}
