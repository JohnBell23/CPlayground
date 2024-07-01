#include "my_linked_list.h"
#include <string.h>

Node* my_linked_list_init(void *value, size_t size) {
	Node *newNode = (Node*) malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->value = malloc(size);
	memcpy(newNode->value, value, size);
	return newNode;
}

Node* my_linked_list_add(Node *nodes, void *value, size_t size) {
	Node *newNode = my_linked_list_init(value, size);
	Node *lastNode = nodes;
	while (lastNode->next != NULL) {
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;
	return newNode;
}

void my_linked_list_print_int_values(Node *nodes) {
	int i = 1;
	Node *current = nodes;
	while (current != NULL) {
		printf("Node %4d value %6d\n", i++, *((int*) current->value));
		current = current->next;
	}
}

void my_linked_list_print_values(Node *nodes) {
	int i = 1;
	Node *current = nodes;
	while (current != NULL) {
		printf("Node %4d value %6d\n", i++, *((int*) current->value));
		current = current->next;
	}
}

void my_linked_list_destroy(Node *nodes) {
	Node *current = nodes;
	while (current != NULL) {
		Node *temp = current;
		current = current->next;
		free(temp->value);
		free(temp);
	}
}
