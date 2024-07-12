#include <stdio.h>
#include "event_consumer.h"

void event_consumer_setnumber(void *instance, int number) {
	EventConsumer *inst = instance;
	inst->value = number;

	printf("event consumer got %d\n", inst->value);
}
