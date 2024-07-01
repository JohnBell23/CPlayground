#include "main.h"

int main(void) {
	printf("Hello\n");

	Value v;
	v.value = 1;
	Node *startNode = my_linked_list_init(v);

	for (int i = 2; i < 10; i++) {
		v.value = i;
		Node *newNode = my_linked_list_add(startNode, v);
	}

	my_linked_list_printValues(startNode);

	my_linked_list_destroy(startNode);

	printf("Goodbye\n");

	return 0;
}
