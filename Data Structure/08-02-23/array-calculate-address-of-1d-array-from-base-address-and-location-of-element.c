#include <stdio.h>

int
main ()
{
  int ba, c, i, address;
  printf ("Enter base address:");
  scanf ("%d", &ba);
  printf ("Enter index of the element: ");
  scanf ("%d", &i);
  printf ("Enter of one element : ");
  scanf ("%d", &c);

  address = ba + (i - 1) * c;
  printf ("%d", address);

  return 0;
}
