#include "Queue_char.h"
#include <iostream>
Queue::Queue(){
}

Queue::~Queue(){
}

void Queue::enqueue(char value){
    insertAtBack(value);
}

char Queue::dequeue(){
    char dequeueReturn = first->val;
    removeFromFront();
    return dequeueReturn;
}

char &Queue::front(){
    return first->val;
}

void Queue::print(){
    print();
}



//int Queue::size(){
    
//}