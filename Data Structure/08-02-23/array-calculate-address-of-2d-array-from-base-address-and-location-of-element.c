//Calculate address of 2d array from base address and location of element

#include <stdio.h>

int
main ()
{
  int ba, c, i, j, m, n, address, address1;
  printf ("Enter base address:");//entering base address
  scanf ("%d", &ba);
  printf ("Enter index of the element: ");//entering index of element
  scanf ("%d %d", &i, &j);
  printf ("Enter of one element : ");//entering of one element
  scanf ("%d", &c);
  printf ("Enter total number of columns : ");//entering total number of columns
  scanf ("%d", &m);
  printf ("Enter total number of rows : ");//entering total number of rows
  scanf ("%d", &n);

  address = ba + ((i - 1) * m + (j - 1)) * c;
//printing address of 2d array
  printf ("%d", address);


  return 0;
}
