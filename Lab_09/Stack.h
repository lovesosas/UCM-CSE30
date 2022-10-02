#include "LinkedList.h"
#ifndef STACK_H_
#define STACK_H_
using namespace std; 
// Representation of an element in the linked list
class Stack : public LinkedList{
    public:
        Stack();
        ~Stack();
        void push(int value);
        int pop();
        int& top();
        void print();
        //bool isEmpty();
        //int size();
};
#endif
