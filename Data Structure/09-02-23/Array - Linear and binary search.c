//Program to perform linear and binary search in an array

#include <stdio.h>

//code for traversal
int
traversal (int arr[], int n)
{
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", arr[i]);
    }
}

//code for linear search in an array
int
linear (int arr[], int size, int element)
{
  for (int i = 0; i < size; i++)
    {
      if (arr[i] == element)
	{
	  return 1;
	}
    }
  return -1;
}

//code for binary search in an array
int
binary (int arr[], int size, int element)
{
  int low, high, mid;
  low = 0;
  high = size - 1;
  while (low < high)
    {
      mid = (low + high) / 2;
      if (arr[mid] == element)
	return mid;
      else if (arr[mid] < element)
	low = mid + 1;
      else
	high = mid - 1;
    }
  return -1;
}

int
main ()
{
  int arr[100] = { 1, 2, 3, 4, 5 }, size = 5;
  int element = 4;
  traversal (arr, size);
  printf ("\n");
  printf ("element %d is at position %d", element,
	  binary (arr, size, element));//printing element with position

  return 0;
}
