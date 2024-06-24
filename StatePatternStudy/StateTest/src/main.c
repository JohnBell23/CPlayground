#include "main.h"

int main(void)
{

    printf("Hello\n");

    TestState myStatus;
    testState_init(&myStatus);

    for (int i = 0; i < 10; i++)
    {
        testState_task(&myStatus);
    }

    printf("Goodbye\n");

    return 0;
}
