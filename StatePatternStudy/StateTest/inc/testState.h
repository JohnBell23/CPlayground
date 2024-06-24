#ifndef TEST_STATE_H
#define TEST_STATE_H

#include <stdio.h>

typedef enum TestStatesEnum
{
    A,
    B,
    C
} TestStates;

typedef struct TestStateType
{
    TestStates state;
    void (*testState_taskFuncPtr)(struct TestStateType *);
    void (*testState_onEntryFuncPtr)(struct TestStateType *);
    void (*testState_onExitFuncPtr)(struct TestStateType *);
} TestState;

void testState_init(TestState *state);
void testState_task(TestState *state);
void testState_print(TestState *state);

#endif