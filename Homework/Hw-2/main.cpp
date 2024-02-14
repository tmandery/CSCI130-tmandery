/*  
 
 By: Tristan Mandery   
 CSCI 130
 Date: 2/13/2024 
 
 This program prompts the user to enter the sides of a triangle.
 It then calculates and displays its area and perimeter. 
 
Algorithm steps:
1. Prompt user to enter sides of the triangle and store each side into a variable. 
2. Calculate area using the formula A = sqrt(s(s-a)(s-b)(s-c)) and store the value into a variable
3. Calculate perimeter using the formula P = a + b + c and store the value into a variable
4. Output the calculated values for area and perimeter
*/
 
#include <iostream> //library for common input, output and formatting
#include <string> // library for string type
#include <cmath> //library for pow and other math functions
#include <iomanip> // library for output formatting: setprecision()

using namespace std; //this line resolves cout, cin, endl, etc.

int main()
{

    double side1=0, side2=0, side3=0;
    double area=0, perimeter=0 ;
    
    =perimeter/2;

    string name;
	cout << "Hey there, please enter your name " << endl;
    getline( cin,name);

    
    cout << "Welcome" << name<< "\n This program finds the area and perimeter of a triangle with the three inputed sides \n\n";

    cout << name << " ,please enter side1:";
    cin >> side1; 

    cout << name << " ,please enter side2:";
    cin >> side2; 

    cout << name << " ,please enter side1:";
    cin >> side3; 

    perimeter = (side1 + side2 + side3); // P= A+B+C
    area = sqrt((perimeter/2)((perimeter/2)-side1)((perimeter/2)-side2)((perimeter/2)-side3));


    cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); 
	cin.get();

    return 0; 
}