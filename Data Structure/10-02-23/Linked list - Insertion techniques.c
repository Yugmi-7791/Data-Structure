//Program to insert element in linked list

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
      printf ("%d ", ptr->data);
      ptr = ptr->next;
    }
}

//insertion of elements in linked list
struct node *
insertion (struct node *head, int data)
{
  struct node *ptr = (struct node *) malloc (sizeof (struct node));
  ptr->next = head;
  ptr->data = data;
  return ptr;
}

//insertion at index in linked list
struct node *
insertionatindex (struct node *head, int data, int index)
{
  struct node *ptr = (struct node *) malloc (sizeof (struct node));
  struct node *p = head;
  int i = 0;
  while (i != index - 1)
    {
      p = p->next;
      i++;
    }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

//insertion at end of linked list
struct node *
insertionatend (struct node *head, int data)
{
  struct node *ptr = (struct node *) malloc (sizeof (struct node));
  ptr->data = data;
  struct node *p = head;
  while (p->next != NULL)
    {
      p = p->next;
    }
  p->next = ptr;
  ptr->next = NULL;
  return head;
}

//insertion after node in linked list
struct node *
insertionafternode (struct node *head, struct node *prenode, int data)
{
  struct node *ptr = (struct node *) malloc (sizeof (struct node));
  ptr->data = data;
  ptr->next = prenode->next;
  prenode->next = ptr;
  return head;
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
  printf ("Original linked list : \n");
  head->data = 7;
  head->next = second;
  second->data = 10;
  second->next = third;
  third->data = 15;
  third->next = NULL;

  traversal (head);
  head = insertion (head, 56);
  printf ("\ninsertion at biggining : \n");
  traversal (head);
  head = insertionatindex (head, 34, 2);
  printf ("\ninsertion at index : \n");
  traversal (head);
  head = insertionatend (head, 73);
  printf ("\ninsertion at end : \n");
  traversal (head);
  head = insertionafternode (head, third, 90);
  printf ("\ninsertion after node : \n");
  traversal (head);


  return 0;
}
