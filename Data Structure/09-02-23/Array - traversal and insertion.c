#include <stdio.h>

int
traversal (int arr[], int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", arr[i]);
    }
}

int
insertion (int arr[], int size, int element, int capacity, int index)
{
  if (size >= capacity)
    {
      return -1;
    }
  for (int i = size - 1; i >= index; i--)
    {
      arr[i + 1] = arr[i];
    }
  arr[index] = element;
  return 1;
}

int
main ()
{
  int n = 5, arr[100] = { 1, 2, 3, 4, 5 };
  int element = 7;
  traversal (arr, n);
  insertion (arr, n, element, 100, 2);
  n += 1;
  printf ("\n");
  traversal (arr, n);

  return 0;
}
