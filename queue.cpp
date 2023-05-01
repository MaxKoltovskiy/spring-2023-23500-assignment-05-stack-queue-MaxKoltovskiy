#include "queue.h"

Queue::Queue() {
    head = 0;
    tail = 4;
}

void Queue::enqueue(int data) { //add an item to the back of the queue
    if(head == tail) {
        throw QUEUE_ERR_FULL;
    }
    q[head] = data;
    head++;
}

int Queue::dequeue() { //remove and return the item from the front of the queue
    int front = (tail+1)%5;
    if(front == head) {
        throw QUEUE_ERR_EMPTY;
    }

    tail = front;
    int item = q[tail];
    q[tail] = 0;

    return item;
}

int Queue::front() { //return but do not remove the item from the front of the queue
    int front = (tail+1)%5;
    if(front == head) {
        throw QUEUE_ERR_EMPTY;
    }

    return q[front];
}

bool Queue::is_empty() {
    return ((tail+1)%5) == head;
}

bool Queue::is_full() {
    return head == tail;
}