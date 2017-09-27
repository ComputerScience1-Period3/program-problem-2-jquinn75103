/*
Jessica Quinn - 9/25/17 3rd period
Coding Project Problem 2
This assignment is the part where we start adding more commands and continue learning how to code with C++
/*
// Libraries
#include <iostrcam> // gives access to cin, cout, cndl, <<, >>, 
boolalpha, noboolalpha
#include <conio.h> // gives accces to _kbhit() and _getch() for pause() 
// Namespaces
using namespace std; //*
// Functions()
void pause() {
cout << "Press any key to continue. . .";
while (!_kbhit());
_getch(); 
cout << '\n'
}
// MAIN
void main90 {
// Define and Assign your variable(s)
 int classes;
 cout << "How many classes do you have a day? \n";
 char first_letter;
 cout << "What is the first letter of your first name? \n" 
 bool clubs; 
 cout << "Are you in any clubs (1) or not (0)? \n" 
 double gpa;
 cout << "What is your GPA (in decimal form)? \n"
  // Display text
 int p = '3'
 cout << "Jessica Quinn" << endl; 
 cout << "Period 3";
 cout << "Hello World!" << endl; 

pause(); // pauses to seee the displayed text 
}