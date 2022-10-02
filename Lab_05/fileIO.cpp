#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    int counter=0;  //counter for how many words there are
    string textLine; //store words
    ifstream myFileIn; //outside functions 
    ofstream myFileOut;


    if(!myFileIn){ //if file does not exist end
        cout << "Error" << endl;
        return 0;
    }



    myFileIn.open("words_in.txt"); //open file
    while(getline(myFileIn, textLine)){ //while going through every line, add one on counter
            counter++;
    }
    myFileIn.close(); //close file
    

    cout << counter << endl;

    myFileIn.open("words_in.txt"); //open file
    string * arrOfString = new string[counter]; //dynamic array of strings
        for(int i = 0; i < counter; i++){ //for loop to go through each index, store each line in texLine and place it in that index
            myFileIn >> textLine;
            arrOfString[i] = textLine;
           cout << arrOfString[i];
    }
    myFileIn.close(); //close






    myFileOut.open("words_out.txt"); // open out file
    for(int i =0; i<counter; i++){ //for loop to print out array in out file
        myFileOut << arrOfString[i] << endl;
        }
     myFileOut.close(); //close out file
    
     delete[] arrOfString; //delete pointer
    return 0;
}