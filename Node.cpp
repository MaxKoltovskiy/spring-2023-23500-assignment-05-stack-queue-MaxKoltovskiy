#include "Node.h"

Node::Node() {
    next = nullptr;
}

Node::Node(int d) {
    data = d;
    next = nullptr;
}

int Node::getData() {
    return data;
}

Node * Node::getNext() {
    return next;
}

void Node::setData(int d) {
    data = d;
}

void Node::setNext(Node* n) {
    next = n;
}