#include "testState.h"

void testState_init(Test_state *state)
{
    state->state = A;
    state->task_func_ptr = &testState_taskA;
}

void testState_task(Test_state *state)
{
    testState_print(state);

    state->task_func_ptr(state);
}

void testState_print(Test_state *state)
{
    switch (state->state)
    {
    case A:
        printf("Status is A\n");
        break;
    case B:
        printf("Status is B\n");
        break;
    case C:
        printf("Status is C\n");
        break;
    }
}

void testState_taskA(Test_state *state)
{
    printf("Task A\n");
    state->state = B;
    state->task_func_ptr = &testState_taskB;
}

void testState_taskB(Test_state *state)
{
    printf("Task B\n");
    state->state = C;
    state->task_func_ptr = &testState_taskC;
}

void testState_taskC(Test_state *state)
{
    printf("Task C\n");
    state->state = A;
    state->task_func_ptr = &testState_taskA;
}
