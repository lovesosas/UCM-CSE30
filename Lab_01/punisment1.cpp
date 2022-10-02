#include <iostream> 
#include <string>
using namespace std;  
int main() 
{ 
string sentence = "I will always use object oriented programming. ";
int lines;

/////////////////////////////////////////////////////

cout << "Enter the number of lines for the punishment: ";
cin >> lines;

////////////////////////////////////////////////////

if(lines < 0){
   cout << "You entered an incorrect value for the number of lines!" << endl;
   return 0;
}

for(int i = 0; i<lines; i++){
  if(lines == 0){
    cout << "" << endl;
  }
  else{
    cout << sentence << endl;
  }
}

////////////////////////////////////////////////////
return 0; 
}