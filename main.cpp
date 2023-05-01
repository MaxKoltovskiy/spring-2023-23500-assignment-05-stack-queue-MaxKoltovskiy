#include <iostream>
#include "stack.h"
#include "queue.h"

int main() {
    Stack *s = new Stack();

    s->push(10);
    s->push(20);
    s->push(30);

    std::cout<< "Top value of stack is : "<< s->top() << "\n";
    std::cout<< "Popped item off stack with value : "<< s->pop() << "\n";
    std::cout<< "Popped item off stack with value : "<< s->pop() << "\n";

    delete s;
    std::cout<< "\n----------------------------\n";

    Queue *q = new Queue();

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);

    std::cout<< "First value in queue is : "<< q->front()<< "\n";
    std::cout<< "Dequeued value of : "<< q->dequeue()<< "\n";
    std::cout<< "Dequeued value of : "<< q->dequeue()<< "\n";
    return 0;
}