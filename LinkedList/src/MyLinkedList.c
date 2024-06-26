#include "MyLinkedList.h"

Node *MyLinkedList_init(Value value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;
    return newNode;
}

Node *MyLinkedList_add(Node *nodes, Value value)
{
    Node *newNode = MyLinkedList_init(value);
    Node *lastNode = nodes;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }
    
    lastNode->next = newNode;
    return newNode;
}

void MyLinkedList_printValues(Node *nodes)
{
    int i = 1;
    Node *current = nodes;
    while (current != NULL)
    {
        printf("Node %d value %d\n", i++, current->value.value);
        current = current->next;
    }
}

void MyLinkedList_destroy(Node *nodes)
{
    Node *current = nodes;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
}