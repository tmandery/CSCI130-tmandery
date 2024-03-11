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

double FindSum(float,float);
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

    cout << "Sum: " << FindSum(n1,n2) << endl;
    cout << "Product: " << FindProduct(n1,n2) << endl;
    cout << "Quotient: " << FindQuotient(n1,n2) << endl;
    cout << "Difference: " << FindDifference(n1,n2) << endl;
    cout << "Remainder: " << FindRemainder(n1,n2) << endl;
    cout << "Power: " << FindPower(n1,n2) << endl;
    cout << "Square root of number 1: " << FindSqrt(n1,n2) << endl;
    

    return 0;

}


double FindSum(float n1,float n2)
{
double sum = n1 + n2;
return sum;
}

double FindProduct(float n1, float n2)
{
double product = n1*n2;
return product;
}
   
double FindDifference(float n1, float n2)
{
double difference = n1-n2;
return difference;
}
   
double FindQuotient(float n1, float n2)
{
double quotient = n1/n2;
return quotient;
}

double FindPower(float n1, float n2)
{
double power =  pow(n1,n2);
return power;
}
   
double FindSqrt(float n1, float n2)
{
double sqrt1 = sqrt(n1);
double sqrt2 = sqrt(n2);
return sqrt1,sqrt2;
}
   
