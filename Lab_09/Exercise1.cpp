#include "Stack.h"
#include <iostream>

using namespace std;

int main(){
    Stack s;
    s.push(4);
    s.push(5);
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

    cout << "push(6)                  ";
    s.push(6);
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

    cout << "push(7)                  ";
    s.push(7);
    s.LinkedList::print();
    cout << endl;

    cout << "top()          ";
    cout << s.top();
    cout << "         ";
    s.LinkedList::print();
    cout << endl;

    cout << "push(8)                  ";
    s.push(8);
    s.LinkedList::print();
    cout << endl;

    cout << "pop()          ";
    cout << s.pop();
    cout << "         ";
    s.LinkedList::print();
    cout << endl;


    return 0;
}