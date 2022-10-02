#include "Queue.h"
#include <iostream>
Queue::Queue(){
}

Queue::~Queue(){
}

void Queue::enqueue(int value){
    insertAtBack(value); //copy out value parameter into our insertAtBack function we are calling
}

int Queue::dequeue(){ //save our first element in dequeueReturn.  remove it from our linked list. The return that element
    int dequeueReturn = first->val;
    removeFromFront();
    return dequeueReturn;
}

int &Queue::front(){

    return first->val; //return our first pointer holder that store into our val node
}

void Queue::print(){
    print(); //call print function 
}



//int Queue::size(){
    
//}