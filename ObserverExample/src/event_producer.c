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
		next = newNode;
	}

}

void event_producer_detach(EventObserver *eventObserver) {
	eventObservers = NULL;
	// TODO: deallocate
}

void event_producer_generate_event() {
	printf("event_producer_generate_event\n");

	ObserverNode *next = eventObservers;
	while (next != NULL) {
		next->item->notification(next->item->instance, 42);
		next = next->next;
	}

}
