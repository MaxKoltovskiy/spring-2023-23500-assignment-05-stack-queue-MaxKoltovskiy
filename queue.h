#pragma once

#define QUEUE_ERR_EMPTY 1
#define QUEUE_ERR_FULL 2
#define QUEUE_ERR_OTHER 4

class Queue {
    private:
        int q[5];
        int head;
        int tail;
    public:
        Queue();

        void enqueue(int);
        int dequeue();

        int front();

        bool is_empty();
        bool is_full();
};