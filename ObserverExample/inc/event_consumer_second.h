#ifndef INC_EVENT_CONSUMER_SECOND_H_
#define INC_EVENT_CONSUMER_SECOND_H_

#include <stdio.h>

typedef struct EventConsumerSecond {
	float value;
} EventConsumerSecond;

void event_consumer_half_number(void *instance, int number);

#endif /* INC_EVENT_CONSUMER_SECOND_H_ */
