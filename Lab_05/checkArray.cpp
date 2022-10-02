#include "lab5functions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
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
    

    if(checkArraySort(arrOfString, array_size) == 1){ //if function returns 1 print this
        cout << " "<< "The array is sorted in ascending order";
    } else if(checkArraySort(arrOfString, array_size) == -1){ //if function returns -1 print this
        cout << " " << "The array is sorted in descending order";
    } else { //anything else print this
        cout << " "<< " The array is not sorted";
    }


     delete[] arrOfString; //delete pointer
    return 0;
}