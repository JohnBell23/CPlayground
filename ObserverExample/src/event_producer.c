#include "event_producer.h"

typedef struct ObserverNode {
	EventObserver *item;
	struct ObserverNode *next;
} ObserverNode;

static ObserverNode *eventObservers = NULL;

void event_producer_attach(EventObserver *eventObserver) {
	ObserverNode *newNode = malloc(sizeof(ObserverNode));
	newNode->item = eventObserver;
	newNode->next = NULL;

	if (eventObservers == NULL) {
		eventObservers = newNode;
	} else {
		ObserverNode *next = eventObservers;
		while (next->next != NULL) {
			next = next->next;
		}
		next->next = newNode;
	}

}

void event_producer_detach(EventObserver *eventObserver) {
	ObserverNode *current = eventObservers;
	ObserverNode *previous = NULL;

	while (current != NULL && current->item != eventObserver) {
		previous = current;
		current = current->next;
	}

	if (current == NULL) {
		return;
	}

	if (previous == NULL) {
		eventObservers = current->next;
	} else {
		previous->next = current->next;
	}

	free(current);
}

void event_producer_generate_event() {
	printf("event_producer_generate_event\n");

	ObserverNode *next = eventObservers;
	while (next != NULL) {
		next->item->notification(next->item->instance, 42);
		next = next->next;
	}

}
