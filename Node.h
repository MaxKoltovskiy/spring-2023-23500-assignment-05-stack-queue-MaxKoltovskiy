#pragma once
class Node {
    private:
        int data;
        Node *next;
    public:
        Node();
        Node(int);
        
        int getData();
        Node *getNext();

        void setData(int);
        void setNext(Node*);
};