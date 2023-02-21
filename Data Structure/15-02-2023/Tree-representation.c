//Program to represent a tree

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node 
{
    int data;
    struct node*left;//structuring left node
    struct node*right;//structuring right node
};

//creating node
struct node * createnode(int data)
{
    struct node * n;
    n=(struct node*)malloc(sizeof(struct node));//assigning size to n in heap using malloc
    n->data=data;
    n->left=NULL;//initially n->left is made NULL
    n->right=NULL;//initially n->right is made NULL
    return n;
}

int main()
{
    /*another method to represent tree
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

    struct node *p1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->data=2;
    p1->left=NULL;
    p1->right=NULL;

    struct node *p2;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->data=2;
    p2->left=NULL;
    p2->right=NULL;

    p->left=p1;
    p->right=p2;*/
    
    //assigning values to nodes of tree
    struct node *p=createnode(2);
    struct node *p1=createnode(1);
    struct node *p2=createnode(4);
    
    //declaring left and right nodes
    p->left=p1;
    p->right=p2;

    return 0;
}
