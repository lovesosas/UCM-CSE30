#include "LinkedList_char.h"
#ifndef QUEUE_H_CHAR
#define QUEUE_H_CHAR
using namespace std; 
// Representation of an element in the linked list
class Queue : public LinkedList{
    public:
        Queue();
        ~Queue();
        void enqueue(char value);
        char dequeue();
        char& front();
        void print();
        //bool isEmpty();
        //int size();
};
#endif
