//Program to perform enqueue and dequeue on queue

#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;//declaration of first node
struct Node *r = NULL;//declaration of rear node
 
struct Node
{
    int data;
    struct Node *next;
};

//Traversal in queue
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Code for enqueue in queue 
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}

//Code for dequeue in queue
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 

int main()
{
    linkedListTraversal(f);//Queue traversal
    printf("Dequeuing element %d\n", dequeue());//printing dequeuing element
    enqueue(34);//adding element to queue
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeuing element %d\n", dequeue());//dequeuing elements of queue
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}
