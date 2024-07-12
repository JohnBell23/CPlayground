#ifndef INC_EVENT_PRODUCER_H_
#define INC_EVENT_PRODUCER_H_

#include <stdlib.h>
#include <stdio.h>
#include "event_observer.h"

void event_producer_attach(EventObserver *eventObserver);
void event_producer_detach(EventObserver *eventObserver);

void event_producer_generate_event();

#endif /* INC_EVENT_PRODUCER_H_ */
