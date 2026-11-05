typedef struct Node
{
    struct Node* next;
    struct Node* prev;
    char data[];
} Node;
