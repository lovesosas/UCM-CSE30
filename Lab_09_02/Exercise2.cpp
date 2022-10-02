#include "Stack_char.h"
#include <iostream>

using namespace std;

int main(){
    Stack s;
    s.push('A');
    s.push('B');
    //s.LinkedList::print();



    //cout << s.size() << endl;

    
    //start here
    cout << "Function call | Output | Content" << endl;
    cout << "isEmpty()      "; 
    if(s.isEmpty() == true){
        cout << "true";
    } else {
        cout << "false";
    }
    cout << "     ";
    s.LinkedList::print();
    cout << endl;

    cout << "push(C)                  ";
    s.push('C');
    s.LinkedList::print();
    cout << endl;

    cout << "size()         ";
    cout << s.size();
    cout << "         ";
    s.LinkedList::print();
    cout << endl;

    cout << "pop()          ";
    cout << s.pop();
    cout << "         ";
    s.LinkedList::print();
    cout << endl;

    cout << "isEmpty()      "; 
    if(s.isEmpty() == true){
        cout << "true";
    } else {
        cout << "false";
    }
    cout << "     ";
    s.LinkedList::print();
    cout << endl;

    cout << "push(D)                  ";
    s.push('D');
    s.LinkedList::print();
    cout << endl;

    cout << "top()          ";
    cout << s.top();
    cout << "         ";
    s.LinkedList::print();
    cout << endl;

    cout << "push(E)                  ";
    s.push('E');
    s.LinkedList::print();
    cout << endl;

    cout << "pop()          ";
    cout << s.pop();
    cout << "         ";
    s.LinkedList::print();
    cout << endl;


    return 0;
}