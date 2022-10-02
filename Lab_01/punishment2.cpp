#include <iostream> 
#include <string>
using namespace std; 

int main(){ 
string sentence = "I will always use object oriented programming. ";
string sentenceTypo = "I will always use object oriented programing. ";
int lines;
int lineSelected;

/////////////////////////////////////////////////////

cout << "Enter the number of lines for the punishment: ";
cin >> lines;

if(lines < 0){
   cout << "You entered an incorrect value for the number of lines!" << endl;
   return 0;
}

cout << "Enter the line you want to make a typo: ";
cin >> lineSelected;

////////////////////////////////////////////////////


if(lineSelected > lines || lineSelected < 0){
   cout << "You entered an incorrect value for the line typo!" << endl;
   return 0;
}

for(int i = 1; i<=lines; i++){
  if(lines == 0){
    cout << "" << endl;
  }
  else if(i == lineSelected){
    cout << sentenceTypo << endl;
  }
  else{
    cout << sentence << endl;
  }
}

return 0; 
}