//Program to calculate address of 1d array from base address and location of element

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
  
//calculating address of 1d array
  address = ba + (i - 1) * c;
  printf ("%d", address);//printing elememts

  return 0;
}
