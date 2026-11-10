#include "linkedlist.h"
#include "stddef.h"
#include "stdlib.h"

void appendNode(LinkedList *list)
{
    Node *newNode = malloc(sizeof(Node));

    if (*(list->head) == NULL)
    {
        list->head = &newNode;
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

void initializeList(LinkedList *list)
{
    if ((*(list->head)) == NULL && (*(list->tail) == NULL))
    {
        list->head = malloc(sizeof(Node));
    }

}
