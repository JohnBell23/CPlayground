#ifndef INC_MY_LINKED_LIST_H_
#define INC_MY_LINKED_LIST_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct NodeType {
	void *value;
	struct NodeType *next;

} Node;

Node* my_linked_list_init(void *value, size_t size);

Node* my_linked_list_add(Node *nodes, void *value, size_t size);

void my_linked_list_print_int_values(Node *nodes);

void my_linked_list_print_values(Node *nodes);

void my_linked_list_destroy(Node *nodes);

#endif /* INC_MY_LINKED_LIST_H_ */
