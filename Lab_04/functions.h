#pragma once 
#include <iostream>

void combineStr(std::string userString, int repeat){
    for( int i = 0; i <repeat; i++){ //for loop to create the repetiton
        std::cout << userString; //print the string in a continous line
    }
    std::cout << "" << std::endl; // start on new line for cleaness.
}


void sortArr(bool sortChoice, int array[], int sizeOfArray){ //take parameters sorting choice, an array, size of the array
    int tempHolder; //temporary holder to help swtich the element into new index
    if(sortChoice == 1){ // 1 = ascend the array
        for(int i = 0; i <sizeOfArray-1; i++){ //for loop to compare the left index
            int minimum = i; //make minimum to the current index we are at
        for(int j = i +1; j < sizeOfArray; j++){ //for loop to compare the right index
            if(array[j]<array[minimum]){ //if element is less than our current element
            minimum = j; //set element as new minimum
          }
    }

    if(minimum != i){ //if minimum does not equal to i
        tempHolder = array[i]; //have temporary holder equal to current i index
        array[i] = array[minimum]; //swap i with minimum
        array[minimum] = tempHolder; //swap minimum with i
    }
    
  }

   std::cout << "This is the sorted array in ascending order:"; //print ascending
  for(int i =0; i<sizeOfArray;i++){ //print new array in order
    std::cout << array[i] << " ";
      }
  }
  else //if sortChoice is 0 descending array
  {
    for(int i = 0; i <sizeOfArray-1; i++){
            int minimum = i;
            for(int j = i +1; j < sizeOfArray; j++){
        if(array[j]>array[minimum]){ 
            minimum = j;
    }
    }
    if(minimum != i){
        tempHolder = array[i];
        array[i] = array[minimum];
        array[minimum] = tempHolder;
    }
  } 
   std::cout << "This is the sorted array in descending order:"; //print descending
  for(int i =0; i<sizeOfArray;i++){
    std::cout << array[i] << " ";
      }
    }
}


void InsertionSort(bool sortChoice, int array[], int sizeOfArray){
    int tempHolder; //temporary holder to help swtich the element into new index
    if(sortChoice == 1){ // ASCENDING ORDER
        for(int i = 1; i < sizeOfArray; i++){ //for loop to allow to access every index
            tempHolder = array[i]; //set temporary holder to our 2nd element
            int j = i-1; 
            while(j>=0 && array[j] > tempHolder){ //run as long as j is greater than 0 and index below j is greter than tempHodler
                array[j+1] = array[j]; // make element ahead of j equal to j
                j = j-1; //decrease value of j by 1
            }
            array[j+1] = tempHolder; //set one element of j equal to tempHolder
            }
             std::cout << "This is the sorted array in ascending order:"; //print ascending
            for(int i =0; i<sizeOfArray;i++){
                 std::cout << array[i] << " ";
            } 
         }
            else { //DESCENDING ORDER
            for(int i = 1; i < sizeOfArray; i++){
            tempHolder = array[i];
            int j = i-1;
            while(j>=0 && array[j] < tempHolder){
                array[j+1] = array[j];
                j = j-1;
            }
            array[j+1] = tempHolder;
            }
        }
         std::cout << "This is the sorted array in descending order:"; //print descending
            for(int i =0; i<sizeOfArray;i++){
                std::cout << array[i] << " ";
      }
    }