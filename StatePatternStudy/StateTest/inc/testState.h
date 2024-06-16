#ifndef TEST_STATE_H
#define TEST_STATE_H

#include <stdio.h>

enum TestStates
{
    A,
    B,
    C
};

typedef struct Test_state_type
{
    enum TestStates state;
    void (*task_func_ptr)(struct Test_state_type *);
} Test_state;

void testState_init(Test_state *state);
void testState_task(Test_state *state);
void testState_print(Test_state *state);

void testState_taskA(Test_state *state);
void testState_taskB(Test_state *state);
void testState_taskC(Test_state *state);

#endif