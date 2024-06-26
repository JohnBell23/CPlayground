#pragma once

#include <stdlib.h>
#include <stdio.h>

typedef struct ValueType
{
    int value;
} Value;

typedef struct NodeType
{
    Value value;
    struct NodeType *next;

} Node;

Node *MyLinkedList_init(Value value);
Node *MyLinkedList_add(Node *nodes, Value value);
void MyLinkedList_printValues(Node *nodes);
void MyLinkedList_destroy(Node *nodes);
