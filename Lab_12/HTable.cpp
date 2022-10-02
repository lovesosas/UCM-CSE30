#include "HTable.h"
using namespace std;
#include <iostream>
HTable::HTable(){
    max_size = 23; //intialize our size becuase we have to in order to work
    numel = 0; //numel
  //dt = new newdata[max_size];
  //newdata ** ptrPtr = &dt;
  for(int i =0; i < max_size; i++){ //set all values to default ones
      dt[i].key = -1;
      dt[i].value = "N/A";
  }
}


HTable::HTable(int t_size){
    numel = 0; //numel is 0
    max_size = t_size; // make our max size set to our user size
    dt = new newdata[max_size]; //pointer that point to the heap that creats our array table with user size
    //newdata ** ptrPtr = &dt;
    for(int i =0; i < max_size; i++){ //for loop to go through entire array and set the default values
      dt[i].key = -1;
      dt[i].value = "N/A";
  }
}

int HTable::hash(int& k){
    int hashed = k % max_size; //takes our user key number and mod it to get the remainder
    return hashed; 
}

int HTable::rehash(int& k){
    int rehash = (k+1)%max_size; //take out user key number, add 1 and mod it to get the remainder
    return rehash;
}

int HTable::add(newdata& d){
    if(numel == max_size){ //if our table is full 
        return -1;
    }

    int hashedKey = hash(d.key); //call function hash with parameter d and access key member. save in hashedKey

    for(int i =0; i < max_size; i++){
        if(dt[hashedKey].key == -1){ //if that hashed index key is equal to -1 (empty/defualt value)
        dt[hashedKey].key = d.key; //update that hashed index's key (-1) to our users key
        dt[hashedKey].value = d.value; //same with value (string)
        numel = numel + 1; //add 1 to numel
        return 0; //end
    } else { //if the key is not -1 (has a key already)
        hashedKey = rehash(hashedKey); //rehash our hash
    }   
    
}
    return -1;
}

int HTable::remove(newdata& d){
     

    int hashedKey = hash(d.key); //call function hash with parameter d and access key member. save in hashedKey

    for(int i =0; i < max_size; i++){
        if(dt[hashedKey].key == d.key){ //if that hashed index key is equal to -1 (empty/defualt value)
        dt[hashedKey].key = -1; //update that hashed index's key (-1) to our users key
        dt[hashedKey].value = "N/A"; //same with value (string)
        numel = numel -1;  //add 1 to numel
        return 0; //end
    } else { //if the key is not -1 (has a key already)
        hashedKey = rehash(hashedKey); //rehash our hash
    }   
    
}
    return -1;

}

void HTable::output(){
   for(int i = 0; i<max_size; i++) {
       cout<< i <<" -> "<< dt[i].key <<" "<< dt[i].value <<endl; //Prints out the index, key, and value of each data.
   }
   cout<< "There are " << numel << " data in the table." << endl;   //The amount of data in the table is printed out
}