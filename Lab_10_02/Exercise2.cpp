#include "Queue_char.h"
#include <iostream>
#include <exception>

using namespace std;

int main(){
    Queue queueObject; //create queue object
    //queueObject.enqueue(5);
    //s.LinkedList::print();



    //cout << s.size() << endl;

    
    //start here
    cout <<  "------------------------------" << endl;
    cout << "Function call | Output | Queue" << endl;
    cout << "dequeue()      "; 
    try{
        //isEmpty is a function of LinkedList (derived from Linkedlist class)
        if(queueObject.isEmpty()){ //if our queue is empty then throw a number becuase it is empty (nothing inside of it)
            throw 'Z';
        } else{ //if our queue is not empty (we have numbers inside) proceed as normal... (remove from beginning of queue)
            queueObject.dequeue();
            cout << "     ";
            cout << endl;
        }
    }
    catch(char caught1){ //use the number we used to test from above
        cout << "Call to dequeue() generated an exception, because the queue is empty, Tested:" << caught1 << endl;
    }
    
   

    cout << "enqueue(D)               ";
    queueObject.enqueue('D');
    queueObject.LinkedList::print(); //another way to use a function from another class
    cout << endl;

    cout << "enqueue(A)      ";
    queueObject.enqueue('A');
    cout << "         ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "dequeue()       ";
    try{
        if(queueObject.isEmpty()){ //if our queue is empty then throw a number becuase it is empty (nothing inside of it)
            throw 'Z';
        } else{ //if our queue is not empty (we have numbers inside) proceed as normal... (remove from beginning of queue)
            cout << queueObject.dequeue();
            cout << "     ";
            queueObject.LinkedList::print();
            cout << endl;
        }
    }
    catch(char caught2){ //use the number we used to test from above
        cout << "Call to dequeue() generated an exception, because the queue is empty, Tested:" << caught2 << endl;
    }
 
    //size is a Linkedlist function (derived)
    cout << "size()          "; 
    cout << queueObject.size();
    cout << "        ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "enqueue(D)               ";
    queueObject.enqueue('D');
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
    try{
        if(queueObject.isEmpty()){ //if our queue is empty then throw a number becuase it is empty (nothing inside of it)
            throw 'Z';
        } else{ //if our queue is not empty (we have numbers inside) proceed as normal... (remove from beginning of queue)
            cout << queueObject.front();
            cout << "     ";
            queueObject.LinkedList::print();
            cout << endl;
        }
    }
    catch(char charCaught1){ //use the number we used to test from above
        cout << "Call to front() generated an exception, because the queue is empty, Tested:" << charCaught1 << endl;
    }

    cout << "enqueue(T)      ";
    queueObject.enqueue('T');
    cout << "         ";
    queueObject.LinkedList::print();
    cout << endl;

    cout << "front()        ";
    try{
        if(queueObject.isEmpty()){ //if our queue is empty then throw a number becuase it is empty (nothing inside of it)
            throw 'Z';
        } else{ //if our queue is not empty (we have numbers inside) proceed as normal... (remove from beginning of queue)
            cout << queueObject.front();
            cout << "     ";
            queueObject.LinkedList::print();
            cout << endl;
        }
    }
    catch(char charCaught2){ //use the number we used to test from above
        cout << "Call to front() generated an exception, because the queue is empty, Tested:" << charCaught2 << endl;
    }


    return 0;
}