#include "main.h"

int main(void) {
	printf("Hello\n");

	int value = 1000;
	Node *startNode = my_linked_list_init(&value, sizeof(int));

	for (int i = 2; i < 100; i++) {
		value = i * 1000;
		my_linked_list_add(startNode, &value, sizeof(int));
	}

	my_linked_list_print_int_values(startNode);

	my_linked_list_destroy(startNode);

	printf("Goodbye\n");

	return 0;
}
