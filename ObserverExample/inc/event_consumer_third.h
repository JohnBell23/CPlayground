#ifndef INC_EVENT_CONSUMER_THIRD_H_
#define INC_EVENT_CONSUMER_THIRD_H_

#include <stdio.h>

typedef struct EventConsumerThird {
	float result;
	float multiplier;
} EventConsumerThird;

void event_consumer_multiply_number(void *instance, int number);

#endif /* INC_EVENT_CONSUMER_THIRD_H_ */
