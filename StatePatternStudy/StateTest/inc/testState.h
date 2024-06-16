#ifndef TEST_STATE_H
#define TEST_STATE_H

#include <stdio.h>

typedef enum TestStatesEnum
{
    A,
    B,
    C
} TestStates;

typedef struct Test_state_type
{
    TestStates state;
    void (*task_func_ptr)(struct Test_state_type *);
} Test_state;

void testState_init(Test_state *state);
void testState_task(Test_state *state);
void testState_print(Test_state *state);

#endif