#include "Queue.h"
#include <iostream>
#include <exception>

using namespace std;

int main(){
    Queue queueObject;
    //queueObject.enqueue(5);
    //s.LinkedList::print();



    //cout << s.size() << endl;

    
    //start here
    cout << "Function call | Output | Queue" << endl;
    cout << "dequeue()      "; 
    try{
        if(queueObject.isEmpty()){ //if our queue is empty then throw a number becuase it is empty (nothing inside of it)
            throw 100;
        } else{ //if our queue is not empty (we have numbers inside) proceed as normal... (remove from beginning of queue)
            queueObject.dequeue();
            cout << "     ";
            cout << endl;
        }
    }
    catch(int caught1){ //use the number we used to test from above
        cout << "Call to dequeue() generated an exception, because the queue is empty, Tested:" << caught1 << endl;
    }

    cout << "enqueue(1)               ";
    queueObject.enqueue(1);
    queueObject.LinkedList::print();
    cout << endl;

    cout << "enqueue(2)      ";
    queueObject.enqueue(2);
    cout << "         ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "dequeue()       ";
    try{
        if(queueObject.isEmpty()){ //if our queue is empty then throw a number becuase it is empty (nothing inside of it)
            throw 100;
        } else{ //if our queue is not empty (we have numbers inside) proceed as normal... (remove from beginning of queue)
            cout << queueObject.dequeue();
            cout << "       ";
            queueObject.LinkedList::print();
            cout << endl;
        }
    }
    catch(int caught2){ //use the number we used to test from above
        cout << "Call to dequeue() generated an exception, because the queue is empty, Tested:" << caught2 << endl;
    }

    cout << "size()          "; 
    cout << queueObject.size();
    cout << "        ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "enqueue(3)               ";
    queueObject.enqueue(3);
    queueObject.LinkedList::print();
    cout << endl;

    cout << "isempty()       ";
    if(queueObject.isEmpty() == true){
        cout << "true";
    } else {
        cout << "false";
    }
    cout << "     ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "front()         ";
    cout << queueObject.front();
    cout << "         ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "enqueue(4)      ";
    queueObject.enqueue(4);
    cout << "         ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "front()        ";
    cout << queueObject.front();
    cout << "         ";
    queueObject.LinkedList::print();
    cout << endl;


    return 0;
}