#include <iostream> 
#include <string>
using namespace std;  
int main() 
{ 
string name;
cout << "Please enter your name: ";
getline(cin, name); //or cin >> name;
cout << "Welcome to CSE30, " << name << "!" << endl;
return 0; 
}