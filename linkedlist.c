#include "linkedlist.h"
#include "stddef.h"
#include "stdlib.h"

void appendNode(LinkedList *list)
{
    Node *newNode = malloc(sizeof(Node));

    if (*(list->head) == NULL)
    {
        list->head->next = newNode;
    }
    else 
    {
        
    }
}

void insertNode(Node **head, int index)
{

}

void removeNode(Node **head, int index)
{

}

char* getNodeData(LinkedList *list, int index);
