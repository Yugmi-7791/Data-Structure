#include <stdio.h>

int
main ()
{
  int ba, c, i, j, m, n, address, address1;
  printf ("Enter base address:");
  scanf ("%d", &ba);
  printf ("Enter index of the element: ");
  scanf ("%d %d", &i, &j);
  printf ("Enter of one element : ");
  scanf ("%d", &c);
  printf ("Enter total number of columns : ");
  scanf ("%d", &m);
  printf ("Enter total number of rows : ");
  scanf ("%d", &n);

  address = ba + ((i - 1) * m + (j - 1)) * c;

  printf ("%d", address);


  return 0;
}
