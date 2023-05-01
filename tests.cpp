#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack.h"
#include "queue.h"

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
TEST_CASE("Enqueue, dequeue, front"){
    Queue *q = new Queue();

    q->enqueue(1);
    q->enqueue(2);
    
    

    CHECK(q->dequeue() == 1);
    CHECK(q->dequeue() == 2);

    q->enqueue(3);
    CHECK(q->front() == 3);
    
    
}
TEST_CASE("Queue is_empty and is_full") {
    Queue *q = new Queue();

    CHECK(q->is_empty() == true);

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    CHECK(q->is_full() == false);
    q->enqueue(5);
    CHECK(q->is_full() == true);
}
TEST_CASE("Queue Errors"){
    Queue *q = new Queue();

    try{
        q->dequeue();
    }catch(int e) {
        CHECK(e == QUEUE_ERR_EMPTY);
    }

    try{
        q->front();
    }catch(int e) {
        CHECK(e == QUEUE_ERR_EMPTY);
    }

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);

    try{
        q->enqueue(6);
    }catch(int e) {
        CHECK(e == QUEUE_ERR_FULL);
    }
}