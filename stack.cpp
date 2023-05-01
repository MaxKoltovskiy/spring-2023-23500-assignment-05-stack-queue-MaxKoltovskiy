#include "stack.h"

Stack::Stack() {
    topindex = nullptr;
}

Stack::Stack(Node* n) {
    topindex = n;
}

Stack::~Stack() {
    Node *current = topindex;
    Node *next = nullptr;
    
    while(current != nullptr) {
        next = current -> getNext();
        delete current;
        current = next;
    }
}

void Stack::push(int num) { //add an item to the top
    Node *top = new Node(num);

    top -> setNext(topindex);
    topindex = top;
}

int Stack::pop() { //remove and return an item from the top of the stack
    if(topindex == nullptr) {
        throw STACK_ERR_EMPTY;
    }
    int item = topindex->getData();

    topindex = topindex->getNext();
    return item;
}

int Stack::top() { //returns but doesn't remove the value on top
    if(topindex == nullptr) {
        throw STACK_ERR_EMPTY;
    }
    return topindex->getData();
}

bool Stack::is_empty() { //returns true if stack is empty
    return topindex == nullptr;
}