#ifndef INC_EVENT_OBSERVER_H_
#define INC_EVENT_OBSERVER_H_

typedef void (*EventNotification)(void *instance, int number);

typedef struct {
	void *instance;
	EventNotification notification;
} EventObserver;

#endif /* INC_EVENT_OBSERVER_H_ */
