#include "event_consumer_third.h"

void event_consumer_multiply_number(void *instance, int number) {
	EventConsumerThird *inst = instance;
	inst->result = number * inst->multiplier;

	printf("event consumer third got: %d * %f = %.2f\n", number,
			inst->multiplier, inst->result);
}
