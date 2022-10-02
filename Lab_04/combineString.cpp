#include "functions.h"
using namespace std;
#include <iostream>

int main(){
    string userString; //declare variables
   int repeat;
   bool boolStartOver = true; // make StartOver true
   while(boolStartOver){ //while StartOver is true run whatever is inside
   cout << "Enter a string: "; //input output
   getline(cin >> ws, userString);
   cout << "Enter a number of times: ";
   cin >> repeat;
   if(repeat == 0){ //if repeat ever becomes 0, turn StartOver into false and end program.
       boolStartOver = false;
       return 0;
   }
   cout << "The resulting string is: "; //print
   combineStr(userString, repeat); //call function combineStr with these arguments.
   }
    return 0;
}