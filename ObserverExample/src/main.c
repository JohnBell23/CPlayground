#include "main.h"

int main(int argc, char *argv[]) {
	printf("Start C observer pattern test\n\n");

	EventConsumer consumer1;
	EventObserver firstObserver;
	firstObserver.instance = &consumer1;
	firstObserver.notification = event_consumer_setnumber;

	event_producer_attach(&firstObserver);

	EventConsumer consumer2;
	EventObserver secondObserver;
	secondObserver.instance = &consumer2;
	secondObserver.notification = event_consumer_half_number;

	event_producer_attach(&secondObserver);

	event_producer_generate_event();

	event_producer_detach(&firstObserver);
	event_producer_detach(&secondObserver);

	printf("\nEnd C observer pattern test\n");
	return 0;
}
