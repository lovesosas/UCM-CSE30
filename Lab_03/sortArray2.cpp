#include <iostream>
#include <string>
using namespace std;
int main()
{
  int tempHolder; //hold value or copy of the index we are at
  int sizeOfArray; 
  int counter = 0; //counter holder
  cout << "Enter size of array: " << endl; //output and input
  cin >> sizeOfArray;
  int array[sizeOfArray]; //array
  
  if(sizeOfArray <= 0) //handles out of bounds input
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

  //double for loop to first go through every element and second loop to compare the values. if first index if bigger then the next one, have that index stored in tempHolder. Then have that idex moved up one index. Have that up one index equal to tempHolder.
  for(int i = 0; i <sizeOfArray-1; i++){
    for(int j = 0; j < sizeOfArray-i-1; j++)
    if(array[j]<array[j+1]){
      counter = counter + 1;
      tempHolder = array[j];
        array[j] = array[j+1];
        array[j+1] = tempHolder;
    }
  }
  
  cout << "This is the sorted array in descending order:" << endl;

  //for loop to print out the descending array
  for(int i =0; i<sizeOfArray;i++){
    cout << array[i] << " " << endl;
  }
  
  cout << "The algorithim selected the maxmimum for the traverse" << endl;
  
  return 0;
  }

