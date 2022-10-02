#include "Stack_char.h"
#include <iostream>
Stack::Stack(){
}

Stack::~Stack(){
}

void Stack::push(char value){
    insertAtBack(value);
}

char Stack::pop(){
    char popReturn = last->val;
    removeFromBack();
    return popReturn;
}

char &Stack::top(){
    return last->val;
}

void Stack::print(){
    print();
}



//int Stack::size(){
    
//}