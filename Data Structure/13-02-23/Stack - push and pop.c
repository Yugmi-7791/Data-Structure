//Program for push and pop operation on stack

#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int *arr;
  int top;
  int size;
};

//function to check if stack is empty or not
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

//function to check if stack is full or not
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

//function to pust value on stack
void
push (struct stack *ptr, int val)
{
  if (isFull (ptr))
    {
      printf ("Stack overflow");
    }
  else
    {
      ptr->top++;
      ptr->arr[ptr->top] = val;
    }
}

//function to pop an element from stack
void
pop (struct stack *ptr, int val)
{
  if (isEmpty (ptr))
    {
      printf ("Stack underflow");
    }
  else
    {
      ptr->top++;
      ptr->arr[ptr->top] = val;
    }
}


int
main ()
{
  struct stack *s = (struct stack *) malloc (sizeof (struct stack));
  s->size = 5;
  s->top = -1;
  s->arr = (int *) malloc (s->size * sizeof (int));

  printf ("stack is created\n");

  printf ("%d\n", isEmpty (s));
  printf ("%d\n", isFull (s));

  push (s, 5);
  push (s, 4);
  push (s, 3);
  push (s, 2);
  push (s, 1);
  pop (s, 5);
  pop (s, 4);
  pop (s, 3);
  pop (s, 2);
  pop (s, 1);
  pop (s, 5);//it will print stack underflow

  printf ("%d\n", isEmpty (s));//after push and pop cheking if string is empty or not
  printf ("%d\n", isFull (s));//after push and pop cheking if string is full or not

  return 0;
}
