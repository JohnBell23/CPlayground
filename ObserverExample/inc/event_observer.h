/*
 * event_observer.h
 *
 * Defines the observer interface
 *
 *  Created on: 12.07.2024
 *      Author: John Bell
 */

#ifndef INC_EVENT_OBSERVER_H_
#define INC_EVENT_OBSERVER_H_

typedef void (*EventNotification)(void *instance, int number);

typedef struct EventObserver {
	void *instance;
	EventNotification notification;
} EventObserver;

#endif /* INC_EVENT_OBSERVER_H_ */
