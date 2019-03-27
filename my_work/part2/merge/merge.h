#ifndef _MERGE_H_
#define _MERGE_H_
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
    struct Node *next;
}Node;

extern Node * link_create(Node **head,Node *new);

extern void link_print(Node *head);

extern Node * Merge(Node **head1 , Node **head2);

#endif