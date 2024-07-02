#include "main.h"

void print_int(int index, void *value) {
	printf("Node %4d value %6d\n", index, *(int*) value);
}

void print_float(int index, void *value) {
	printf("Node %4d value %6.3f\n", index, *(float*) value);
}

int main(void) {
	printf("Hello\n");

	// int list
	int value = 1000;
	Node *startNode = my_linked_list_init(&value, sizeof(int));

	for (int i = 2; i < 10; i++) {
		value = i * 1000;
		my_linked_list_add(startNode, &value, sizeof(int));
	}

	my_linked_list_print_values(startNode, print_int);
	my_linked_list_destroy(startNode);

	printf("\n");

	// float list
	float floatval = 1.11;
	startNode = my_linked_list_init(&floatval, sizeof(float));

	for (int i = 2; i < 10; i++) {
		floatval = i * 1.11;
		my_linked_list_add(startNode, &floatval, sizeof(float));
	}

	my_linked_list_print_values(startNode, print_float);
	my_linked_list_destroy(startNode);

	printf("Goodbye\n");

	return 0;
}
