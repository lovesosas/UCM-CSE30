#include "functions.h"
using namespace std;
#include <iostream>

int main(){
  bool sortChoice;
  int sizeOfArray;
  cout << "Enter size of array: "; //output input
  cin >> sizeOfArray;
  int * array = new int[sizeOfArray]; //int pointer that allocates space for desired size of array on heap.

  //handles out of bounds input
  if(sizeOfArray <= 0){
  cout << "ERROR: you entered an incorrect value for the array size!";
    return 0; //end if out of bound input is inputed
  } else {
    cout << "Enter the numbers in the array, seperated by a space, and press enter: "; //ask if input if valid
  }

  //for loop to hold elements for each index
  for(int i = 0; i<sizeOfArray;i++)
  {
    cin>>array[i];
  }

  cout << "Sort in ascending (1) or descending (0) order?: "; //print and ask for input
  cin >> sortChoice;

  sortArr(sortChoice, array, sizeOfArray); //call function sortArr with these arguments
    delete[] array; //delete the allocated space from earlier

}