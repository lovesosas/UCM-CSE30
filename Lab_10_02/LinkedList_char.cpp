#include "LinkedList_char.h"
#include <iostream>
//These are our class functions...
LinkedList::LinkedList(){ //create our contructor (initialize our variables)
    last = nullptr; //our last pointer is pointing to nothing because its the end
    first = last; //first pointer points to nothing becuase we are starting off with nothing
}

LinkedList::~LinkedList(){
    while(first != nullptr){ //while first pointer does not equal to nothing
        Node *temp; //temp pointer
        temp = first; //first pointer equals to temp pointer
        first = first->next;
        delete(temp); //delete temp pointer
    }
    last = nullptr; //last pointer is nothing
}

//
void LinkedList::insertAtBack(char valueToInsert){ //take in parameter from E1.cpp
    Node *temp = new Node; //temp is a node pointer that points to free space on heap (contains int value node holder and pointer to next node)
    temp->val = valueToInsert; //value from our E1.cpp is holded by temp pointer and stored into val in our struct node
    temp->next = nullptr; //nothing is holded by temp pointer and stored inside next pointer. Next points to nohing
    if(last == nullptr){ //if our last pointer points to nothing
    first = last = temp; //make another node at the end of our list
    }else{ //else 
        last->next = temp; //
        last = temp;
    }
}


bool LinkedList::removeFromBack(){
    if(first == nullptr){ //if our first pointer has nothing return false cuz there is nothing to remove
        return false;
    }
        else if(first == last){ //if first pointer is equal to last pointer
            delete(first); //delete first pointer
            first = last = nullptr; //have both our first and last point to nullptr
        }
            else{
                Node *temp; //temp node pointer
                temp = first; //first becomes temp pointer
                while(temp->next != last) //while next
                temp = temp->next;
                last = temp;
                temp = temp->next;
                delete(temp);
                last->next = nullptr;
            }
    return true;
}


void LinkedList::print(){
    Node *temp = first;
    while(temp != last){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    if(temp != nullptr){
        cout<<temp->val;
    }
}


bool LinkedList::isEmpty(){
    if(first == last){ //if our first pointer and our last pointer are the same, the list is empty
        return true;
    }
    return false; // else not empty
}


int LinkedList::size(){
    int count = 0;
    Node *temp = first;
    if(temp == nullptr)
    return count;
    while(temp != last){
        count++;
        temp = temp->next;
    }
    return count+1;
}


void LinkedList::clear(){
    while(first != nullptr){
        Node *temp;
        temp = first;
        first = first->next;
        delete(temp);
    }
    last = nullptr;
}


void LinkedList::insertAtFront(char valueToInsert){ //take in parameter from E1.cpp
    Node *temp = new Node; //temp is a node pointer that points to free space on heap (contains int value node holder and pointer to next node)
    temp->val = valueToInsert; //value from our E1.cpp is holded by temp pointer and stored into val in our struct node
    if(last == nullptr){ //if our last pointer points to nothing
        first = last = temp;//make another node at the end of our list
    }else{
        temp->next = first;
        first = temp;
    }
}

bool LinkedList::removeFromFront(){
    if(first == nullptr){ //if first pointer is equal to nothing, return false because there is nothing
        return false;
    }

    Node *temp = first; 
    first = first->next;
    delete(temp);

    if(first == nullptr){
        last = nullptr;
    }
    return true;
}
