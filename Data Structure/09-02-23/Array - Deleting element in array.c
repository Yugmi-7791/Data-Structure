#include <stdio.h>

int
traversal (int arr[], int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", arr[i]);
    }
}

void
del (int arr[], int size, int index)
{

  for (int i = index; i < size - 1; i++)
    {
      arr[i] = arr[i + 1];
    }

}

int
main ()
{
  int arr[100] = { 1, 2, 3, 4, 5 }, size = 5;
  int index = 2;
  traversal (arr, size);
  del (arr, size, 2);
  printf ("\n");
  size -= 1;
  traversal (arr, size);

  return 0;
}
