#ifndef STACK_H
#define STACK_H
//#include "LinkedList.h"
// Representation of an element in the linked list
template <class T> class Stack : public LinkedList<T>{
    public:
        Stack();
        ~Stack();
        void push(T value);
        T pop();
        T& top();
        //void print();
        //bool isEmpty();
        //int size();
};

template <class T>
Stack<T>::Stack():LinkedList<T>(){
}


template <class T>
void Stack<T>::push(T value){
    this->insertAtFront(value);//copy out value parameter into our insertAtBack function we are calling
    return;
}

template <class T>
T Stack<T>::pop(){ //save our last element in popReturn.  remove it from our linked list. The return that element
    T popReturn = this->first->val;
    this->removeFromFront();
    return popReturn;
}

template <class T>
T &Stack<T>::top(){
    return this->first->val; //return our last pointer holder that store into our val node
}

template <class T>
Stack<T>::~Stack(){
}
#endif