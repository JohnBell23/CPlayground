#include "event_consumer_second.h"

void event_consumer_half_number(void *instance, int number) {
	EventConsumerSecond *inst = instance;
	inst->value = number / 2.0;

	printf("event consumer second got: %d / 2 = %.2f\n", number, inst->value);
}
