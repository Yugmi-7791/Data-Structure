#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int *arr;
  int top;
  int size;
};

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
  push (s, 5);
  push (s, 5);
  push (s, 5);
  push (s, 5);
  pop (s, 5);
  pop (s, 5);
  pop (s, 5);
  pop (s, 5);
  pop (s, 5);
  pop (s, 5);

  printf ("%d\n", isEmpty (s));
  printf ("%d\n", isFull (s));

  return 0;
}
