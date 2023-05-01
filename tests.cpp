#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack.h"

TEST_CASE("Stack push and pop"){
    Stack *o = new Stack();
    o->push(10);
    o-> push(20);

    CHECK(o->pop() == 20);
    CHECK(o->pop() == 10);
}
TEST_CASE("Stack top and is_empty"){
    Node *n = new Node(10);
    Stack *s = new Stack(n);

    CHECK(s->top() == 10);
    s->pop();
    CHECK(s->is_empty() == true);
}
TEST_CASE("Stack errors"){
    Stack *s = new Stack();

    try {
        s->pop();
    }catch(int e) {
        CHECK(e == STACK_ERR_EMPTY);
    }

    try {
        s->top();
    }catch(int e) {
        CHECK(e == STACK_ERR_EMPTY);
    }
}