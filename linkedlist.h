#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Linked list lib that allows O(1) appending, insertion, and removals
typedef struct Node
{
    struct Node *next;
    struct Node *prev;
    char data[100];
} Node;

typedef struct LinkedList
{
    struct Node **head;
    struct Node **tail;
} LinkedList;

void appendNode(LinkedList *list);
void insertNode(LinkedList *list, int index);
void removeNode(LinkedList *list, int index);
char *getNodeData(LinkedList *list, int index);
void initializeList(LinkedList *list);

#endif
