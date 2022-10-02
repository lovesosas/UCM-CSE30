#include <iostream>
#include <string>
using namespace std;
int main()
{
  //declare variables
  bool statement = true; 
  int sizeOfArray;
  int userKeyNumber;
  int counter = 0;

  //output and input
  cout << "Enter size of array: " << endl; 
  cin >> sizeOfArray;
  int array[sizeOfArray];

  //handles out of bounds input
  if(sizeOfArray <= 0)
  {
  cout << "ERROR: you entered an incorrect value for the array size!";
    return 0; //end if out of bound input is inputed
  } 
  else 
  {
    cout << "Enter the numbers in the array, seperated by a space, and press enter: "; //ask if input if valid
  }

  //for loop to hold elements for each index
  for(int i = 0; i<sizeOfArray;i++)
  {
    cin>>array[i];
  }

  //output and input
  cout << "Enter a number to search in the array: ";
  cin >> userKeyNumber;

  //for loop to check at each index to see if it matches Key. If it does increase counter and break (stop loop). If not keep increasing counter
  int i;
  for(i = 0; i<sizeOfArray;i++){
  if(array[i] == userKeyNumber){
    counter++;
    break;
  } 
  else{
    counter++;
  }
    }

  //if i is equal sizeOfArray make statement false.
  if(i == sizeOfArray){
  statement = false;
}

  //if statement true then print first else if false print the last sentence
  if(statement){
    cout << "Found value " << userKeyNumber << " at index " << i << " which took " << counter << " checks." << endl;
  } else{
    cout << "The value " << userKeyNumber << " was not found in the array!" << endl;
  }

  //if first index is equal to key, then its best case
  if(array[0] == userKeyNumber){
    cout << "We ran into the best case scenario!" << endl;
  }

  //if last index is equal to key, then its worst case
  if(array[sizeOfArray-1] == userKeyNumber){
    cout << "We ran into the worst case scenario!" << endl;
  }
return 0;
}