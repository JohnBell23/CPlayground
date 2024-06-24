#include "testState.h"

void changeState(TestState *state, TestStates newState);
void taskA(TestState *state);
void taskB(TestState *state);
void taskC(TestState *state);

void taskA_onEntry(TestState *state);
void taskB_onEntry(TestState *state);
void taskC_onEntry(TestState *state);

void taskA_onExit(TestState *state);
void taskB_onExit(TestState *state);
void taskC_onExit(TestState *state);

void testState_init(TestState *state)
{
    state->state = A;
    state->testState_taskFuncPtr = taskA;
    state->testState_onEntryFuncPtr = taskA_onEntry;
    state->testState_onExitFuncPtr = taskA_onExit;
}

void testState_task(TestState *state)
{
    testState_print(state);

    state->testState_taskFuncPtr(state);
}

void testState_print(TestState *state)
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

void taskA(TestState *state)
{
    printf("Task A\n");

    changeState(state, B);
}

void taskB(TestState *state)
{
    printf("Task B\n");

    changeState(state, C);
}

void taskC(TestState *state)
{
    printf("Task C\n");

    changeState(state, A);
}

void taskA_onEntry(TestState *state)
{
    printf("taskA_onEntry\n");
}

void taskB_onEntry(TestState *state)
{
    printf("taskB_onEntry\n");
}

void taskC_onEntry(TestState *state)
{
    printf("taskC_onEntry\n");
}

void taskA_onExit(TestState *state)
{
    printf("taskA_onExit\n");
}

void taskB_onExit(TestState *state)
{
    printf("taskB_onExit\n");
}

void taskC_onExit(TestState *state)
{
    printf("taskC_onExit\n");
}

void changeState(TestState *state, TestStates newState)
{
    state->testState_onExitFuncPtr(state);

    state->state = newState;
    switch (newState)
    {
    case A:
        state->testState_taskFuncPtr = &taskA;
        state->testState_onEntryFuncPtr = taskA_onEntry;
        state->testState_onExitFuncPtr = taskA_onExit;
        break;
    case B:
        state->testState_taskFuncPtr = &taskB;
        state->testState_onEntryFuncPtr = taskB_onEntry;
        state->testState_onExitFuncPtr = taskB_onExit;
        break;
    case C:
        state->testState_taskFuncPtr = &taskC;
        state->testState_onEntryFuncPtr = taskC_onEntry;
        state->testState_onExitFuncPtr = taskC_onExit;
        break;
    }

    state->testState_onEntryFuncPtr(state);
}
