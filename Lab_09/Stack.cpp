#include "Stack.h"
#include <iostream>
Stack::Stack(){
}

Stack::~Stack(){
}

void Stack::push(int value){
    insertAtBack(value); //copy out value parameter into our insertAtBack function we are calling
}

int Stack::pop(){ //save our last element in popReturn.  remove it from our linked list. The return that element
    int popReturn = last->val;
    removeFromBack();
    return popReturn;
}

int &Stack::top(){
    return last->val; //return our last pointer holder that store into our val node
}

void Stack::print(){
    print(); //call print function 
}



//int Stack::size(){
    
//}