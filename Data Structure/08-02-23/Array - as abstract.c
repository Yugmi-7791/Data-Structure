//Array as an abstract 

#include <stdio.h>
#include <stdlib.h>

//Structure for array
struct myarray
{
  int total_size;
  int used_size;
  int *ptr;
};

//Function to create an array of marks
void
creatarray (struct myarray *a, int tsize, int usize)
{
  a->total_size = tsize;
  a->used_size = usize;
  a->ptr = (int *) malloc (tsize * sizeof (int));
}

//Function to show marks
void
show (struct myarray *a)
{
  for (int i = 0; i < a->used_size; i++)
    {
      printf ("%d\n", (a->ptr)[i]);
    }
}

//Function to print element
void
set (struct myarray *a)
{
  int n;
  for (int i = 0; i < a->used_size; i++)
    {
      printf ("Enter element %d", i);
      scanf ("%d", &n);
      (a->ptr)[i] = n;
    }
}

int
main ()
{
  struct myarray marks;
  creatarray (&marks, 10, 2);
  set (&marks);
  show (&marks);
  return 0;
}
