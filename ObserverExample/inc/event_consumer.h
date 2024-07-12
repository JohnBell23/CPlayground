/*
 * event_consumer.h
 *
 * Example event consumer
 *
 *  Created on: 12.07.2024
 *      Author: John Bell
 */

#ifndef INC_EVENT_CONSUMER_H_
#define INC_EVENT_CONSUMER_H_

typedef struct EventConsumer {
	int value;
} EventConsumer;

void event_consumer_setnumber(void *instance, int number);

#endif /* INC_EVENT_CONSUMER_H_ */
