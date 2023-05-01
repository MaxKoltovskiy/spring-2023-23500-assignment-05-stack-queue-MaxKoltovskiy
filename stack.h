#pragma once
#include "Node.h"

#define STACK_ERR_EMPTY 1
#define STACK_ERR_FULL 2
#define STACK_ERR_OTHER 4

class Stack {
    private:
        Node *topindex;
    public:
        Stack();
        Stack(Node*);

        void push(int);
        int pop();
        int top();
        bool is_empty();
};