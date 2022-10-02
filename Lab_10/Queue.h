#include "LinkedList.h"
#ifndef QUEUE_H_
#define QUEUE_H_
using namespace std; 
// Representation of an element in the linked list
class Queue : public LinkedList{
    public:
        Queue();
        ~Queue();
        void enqueue(int value);
        int dequeue();
        int& front();
        void print();
        //bool isEmpty();
        //int size();
};
#endif
