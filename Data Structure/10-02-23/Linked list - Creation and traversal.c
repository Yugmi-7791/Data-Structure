//Program for Creation and traversal of linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

//traversal in linked list
void
traversal (struct node *ptr)
{
  while (ptr != NULL)
    {
      printf ("%d ", ptr->data);//printing elements in while loop
      ptr = ptr->next;
    }
}

int
main ()
{
  struct node *head;
  struct node *second;
  struct node *third;

  head = (struct node *) malloc (sizeof (struct node));
  second = (struct node *) malloc (sizeof (struct node));
  third = (struct node *) malloc (sizeof (struct node));

  //assigning data to first,second and third node and linking each node to next node
  head->data = 7;
  head->next = second;
  second->data = 10;
  second->next = third;
  third->data = 15;
  third->next = NULL;

  traversal (head);


  return 0;
}
