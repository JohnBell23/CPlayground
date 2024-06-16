#include "testState.h"

void changeState(Test_state *state, TestStates newState);
void taskA(Test_state *state);
void taskB(Test_state *state);
void taskC(Test_state *state);

void testState_init(Test_state *state)
{
    state->state = A;
    state->task_func_ptr = &taskA;
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

void taskA(Test_state *state)
{
    printf("Task A\n");
    
    changeState(state, B);
}

void taskB(Test_state *state)
{
    printf("Task B\n");
    
    changeState(state, C);
}

void taskC(Test_state *state)
{
    printf("Task C\n");

    changeState(state, A);
}

void changeState(Test_state *state, TestStates newState)
{
    state->state = newState;
    switch (newState)
    {
    case A:
        state->task_func_ptr = &taskA;
        break;
    case B:
        state->task_func_ptr = &taskB;
        break;
    case C:
        state->task_func_ptr = &taskC;
        break;
    }
}
