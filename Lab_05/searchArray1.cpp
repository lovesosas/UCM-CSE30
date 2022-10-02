#include "lab5functions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    int p =0;
    
    string K;
    int counter=0; // counter for how many words
    string textLine; //store words
    ifstream myFileIn; //outside functions
    ofstream myFileOut;


    if(!myFileIn){ //if file does not exist, end
        cout << "Error" << endl;
        return 0;
    }



    myFileIn.open("words_in.txt"); //open file
    while(getline(myFileIn, textLine)){ //go through every line and add counter as it goes
            counter++;
    }
    myFileIn.close(); //close file
    
    int array_size = counter; // make array_size = counter
    //cout << counter << endl;

    myFileIn.open("words_in.txt"); //open file
    string * arrOfString = new string[counter]; //dynamic array of strings on heap
        for(int i = 0; i < counter; i++){ //for loop to go thorugh each index, store aech line in textline and place it in that index
            myFileIn >> textLine;
            arrOfString[i] = textLine;
           cout << arrOfString[i];
    }
    myFileIn.close(); //close file






    myFileOut.open("words_out.txt"); //open file out
    for(int i =0; i<counter; i++){ //for loop to print out array in out file
        myFileOut << arrOfString[i] << endl;
        }
    myFileOut.close(); //close out file
    
    checkArraySort(arrOfString, array_size); //sort array

    cout << "Enter key to search: " << endl; //ask for intput
    cin >> K;


    //print our function out
    if(binarySearchR(arrOfString, p, array_size, K) == -1){
        cout << "Key was not found" <<endl;
    } else {
        cout << "Found key " << K << " at index " << binarySearchR(arrOfString, p, array_size, K);
    }

    delete[] arrOfString; //delete pointer
    return 0;
}