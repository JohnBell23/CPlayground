#include "testProgram.h"

int main(void)
{

    printf("Program\n");
    printf("start\n");

    Test_state myStatus;
    testState_init(&myStatus);

    for (int i = 0; i < 10; i++)
    {
        testState_task(&myStatus);
    }

    printf("end\n");

    return 0;
}
