/*
 * my_linked_list.h
 *
 *  Created on: 01.07.2024
 *      Author: jlue4
 */

#ifndef INC_MY_LINKED_LIST_H_
#define INC_MY_LINKED_LIST_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct ValueType {
	int value;
} Value;

typedef struct NodeType {
	Value value;
	struct NodeType *next;

} Node;

Node* my_linked_list_init(Value value);
Node* my_linked_list_add(Node *nodes, Value value);
void my_linked_list_printValues(Node *nodes);
void my_linked_list_destroy(Node *nodes);

#endif /* INC_MY_LINKED_LIST_H_ */
