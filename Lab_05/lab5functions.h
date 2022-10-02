#pragma once 
#include <iostream>
#include <fstream>

int checkArraySort(std::string arrOfString[], int array_size){

    if(array_size == 0 || array_size == 1){ //if size_size is 0 or 1 return 0
        return 0;
    }

    for(int i=0; i<array_size-1;i++){ //check if array is asscending if it is reutrn 1;
        if(arrOfString[i+1] < arrOfString[i]){
            return 1;
         }
    }  


    for(int i=0; i<array_size-1;i++){
        if(arrOfString[i+1] > arrOfString[i]){ //check fi array is descending if it is reuturn -1
            return -1;
        }
    }  

    return 0; //return if not sorted
    }

//BINARY SEARCH WITH RECURSIVE
int binarySearchR(std::string arrOfString[], int array_size, int p, std::string K){
    if(p<=array_size){ //if min index is less than or equal to index max
        int mid =(p+array_size)/2; //create middle of array by using min and max index and dividing by 2
        if(arrOfString[mid].compare(K) ==0){ //check if middle of array of string that compares is with our key is equal to 0 reutnr mid
            return mid; 
    } else if(arrOfString[mid].compare(K)<0){ //else if its less than 0, call functio again
        return binarySearchR(arrOfString, array_size, mid+1, K);
    } else{
        return binarySearchR(arrOfString, p, mid-1, K); //if min index is not less than max index call function again.
    }
    } else {
        return -1;
    }
}

//BINARY SEARCH WITH LOOP
int binarySearchL(std::string arrOfString[], int array_size, std::string key){
    int min = 0; //index 0 (not element)
    int max = array_size-1; //last index (not element)
    while(min <=max){ //while min is <= max, create the middle of our array
        int mid = (min+max)/2;
        if(key == arrOfString[mid]){ //check to see if our key string is = to mid position
            return mid; //retunr if true
        } else if(key < arrOfString[mid]){ //if not, see if our key is less than our mid
            max = mid-1; //if it is then its in the lower half (adjust our max)
        } else{
            min = mid+1; //if not its in the upper half of array (adjust min)
        }
    }
    return -1;
}