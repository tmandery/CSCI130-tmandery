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

void test();

double findSum(float,float);
double FindProduct(float,float);
double FindQuotient(float,float);
double FindDifference(float,float);
double FindRemainder(float,float);
double FindPower(float,float);
double FindSqrt(float,float);

void clearScreen() 
{
   
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}



int main()
{
    clearScreen();

    float n1,n2;
    cout << "Welcome to the Calculator. Please enter two numbers seperated by a space"<< endl;
    cin >> n1 >> n2;
    cout << "Your numbers are " << n1 << " and " << n2 << endl;

    test();

    cout << "Sum: " << findSum(n1,n2) << endl;
    cout << "Product: " << findProduct(n1,n2) << endl;
    cout << ""






}




 
   


