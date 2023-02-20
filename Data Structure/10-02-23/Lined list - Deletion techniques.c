//Program for deletion of element in linked list

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

//deletion of element in linked list
struct node *
del (struct node *head)
{
  struct node *ptr = head;
  head = head->next;
  free (ptr);

  return head;
}

//deletion of element at an index
struct node *
delete (struct node *head, int index)
{
  struct node *ptr = head;
  struct node *q = head->next;
  for (int i = 0; i < index - 1; i++)
    {
      ptr = ptr->next;
      q = q->next;
    }
  ptr->next = q->next;
  free (q);
  return head;
}

//deletion at end of linked list
struct node *
deleteatlast (struct node *head)
{
  struct node *ptr = head;
  struct node *q = head->next;
  while (q->next != NULL)
    {
      ptr = ptr->next;
      q = q->next;
    }
  ptr->next = NULL;
  free (q);
  return head;
}

//deleting value of linked list
struct node *
deleteval (struct node *head, int value)
{
  struct node *ptr = head;
  struct node *q = head->next;
  while (q->data != value && q->next != NULL)
    {
      ptr = ptr->next;
      q = q->next;
    }
  if (q->data == value)
    {
      ptr->next = q->next;
      free (q);
    }
  return head;
}

int
main ()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;
  struct node *fifth;

  head = (struct node *) malloc (sizeof (struct node));
  second = (struct node *) malloc (sizeof (struct node));
  third = (struct node *) malloc (sizeof (struct node));
  fourth = (struct node *) malloc (sizeof (struct node));
  fifth = (struct node *) malloc (sizeof (struct node));

  head->data = 3;
  head->next = second;
  second->data = 6;
  second->next = third;
  third->data = 9;
  third->next = fourth;
  fourth->data = 2;
  fourth->next = fifth;
  fifth->data = 7;
  fifth->next = NULL;

  traversal (head);
  printf ("\n");
  head = del (head);
  traversal (head);

  printf ("\n");
  head = delete (head, 2);
  traversal (head);

  printf ("\n");
  head = deleteatlast (head);
  traversal (head);

  printf ("\n");
  head = deleteval (head, 6);
  traversal (head);
  return 0;
}
