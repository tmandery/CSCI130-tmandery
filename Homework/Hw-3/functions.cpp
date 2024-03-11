/*
Tristan Mandery

Hw-3 A Basic Calculator using Functions and Automated Unit Testing

Date-  March/4/2024

*/
//Program intent A Basic Calculator using Functions and Automated Unit Testing
//




#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

string answer;
int num1=0;
int num2=0;

void multinums()
{
answer = (num1 * num2);
cout << "num1" << "*" << "num2" << "=" << answer << endl;

}



int main()
{

cout << "This program calculates several mathematical expressions." << endl;

 cout << "Enter the numbers in the form (x, y): ";
        cin >> num1 >> num2; 
        printf("(num1, num2) = (%d, %d)\n", num1, num2);

multinums();



    cin.ignore(1000, '\n');
    cout << "Enter to quit the program: ";
    cin.get();
    cout << "Good bye..." << endl;
    return 0;
}


