#include "LinkedList.h"
#include <iostream>
//These are our class functions...
template <class T>
LinkedList<T>::LinkedList(){ //create our contructor (initialize our variables)
    last = nullptr; //our last pointer is pointing to nothing because its the end
    first = last; //first pointer points to nothing becuase we are starting off with nothing
}

template <class T>
LinkedList<T>::~LinkedList(){
    while(first != nullptr){ //while first pointer does not equal to nothing
        Node<T> *temp; //temp pointer
        temp = first; //first pointer equals to temp pointer
        first = first->next;
        delete(temp); //delete temp pointer
    }
    last = nullptr; //last pointer is nothing
}

template <class T>
void LinkedList<T>::insertAtBack(T valueToInsert){ //take in parameter from E1.cpp
    Node<T> *temp = new Node<T>; //temp is a node pointer that points to free space on heap (contains int value node holder and pointer to next node)
    temp->val = valueToInsert; //value from our E1.cpp is holded by temp pointer and stored into val in our struct node
    temp->next = nullptr; //nothing is holded by temp pointer and stored inside next pointer. Next points to nohing
    if(last == nullptr){ //if our last pointer points to nothing
    first = last = temp; //make another node at the end of our list
    }else{ //else 
        last->next = temp; //
        last = temp;
    }
}

template <class T>
bool LinkedList<T>::removeFromBack(){
    if(first == nullptr){ //if our first pointer has nothing return false cuz there is nothing to remove
        return false;
    }
        else if(first == last){ //if first pointer is equal to last pointer
            delete(first); //delete first pointer
            first = last = nullptr; //have both our first and last point to nullptr
        }
            else{
                Node<T> *temp; //temp node pointer
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

template <class T>
void LinkedList<T>::print(){
    Node <T>*temp = first;
    while(temp != last){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    if(temp != nullptr){
        cout<<temp->val;
    }
}

template <class T>
bool LinkedList<T>::isEmpty(){
    if(first == last){ //if our first pointer and our last pointer are the same, the list is empty
        return true;
    }
    return false; // else not empty
}

template <class T>
int LinkedList<T>::size(){
    int count = 0;
    Node <T>*temp = first;
    if(temp == nullptr)
    return count;
    while(temp != last){
        count++;
        temp = temp->next;
    }
    return count+1;
}

template <class T>
void LinkedList<T>::clear(){
    while(first != nullptr){
        Node <T>*temp;
        temp = first;
        first = first->next;
        delete(temp);
    }
    last = nullptr;
}

template <class T>
void LinkedList<T>::insertAtFront(T valueToInsert){ //take in parameter from E1.cpp
    Node<T> *temp = new Node<T>; //temp is a node pointer that points to free space on heap (contains int value node holder and pointer to next node)
    temp->val = valueToInsert; //value from our E1.cpp is holded by temp pointer and stored into val in our struct node
    if(last == nullptr){ //if our last pointer points to nothing
        first = last = temp;//make another node at the end of our list
    }else{
        temp->next = first;
        first = temp;
    }
}
template <class T>
bool LinkedList<T>::removeFromFront(){
    if(first == nullptr){ //if first pointer is equal to nothing, return false because there is nothing
        return false;
    }

    Node<T> *temp = first; 
    first = first->next;
    delete(temp);

    if(first == nullptr){
        last = nullptr;
    }
    return true;
}
