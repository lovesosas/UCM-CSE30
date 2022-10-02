#ifndef HTABLE_H
#define HTABLE_H
#include <string>
using namespace std;

// Representation of a key/value pair in the table.
struct newdata {
        int key;
        string value;
};

class HTable {
        newdata *dt; //the table to hold hashed data structs. dt is a data pointer cuz we want to acess the members inside data 
        int max_size; //max size of the table
        int numel; //number of elements in table, to check if it's full
public:
        HTable(); //default constructor to initialize a table of size 23
        HTable (int t_size); //alternate constructor to initialize a table of size t_size
        int hash(int &k);  //evaluates hash code of key
        int rehash(int &k); //performs linear probing if collision appears
        int add(newdata &d);   //adda a data pair into the table according to its key
        int remove(newdata &d); //removes data pair from the table according to its key
        void output();  //print out the content of the table
};
#endif
