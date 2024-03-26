/*
Tristan Mandery

Hw-4 CLI Menu, Conditionals, Functions and Testing


Date-  March/24/2024

*/
//Program intent
//




#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

void test();
bool program();
void printMenu(void);
double FindSum(float,float,float,float,float);
double FindProduct(float,float,float,float,float);
double FindQuotient(float,float,float,float,float);
double FindAverage(float,float,float,float,float);
double FindRemainder(float,float,float,float,float);
double FindPower(float,float,float,float,float);
double FindSqrt(float,float,float,float,float);

void clearScreen() ,
{
   
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}



int main(int argc, char* argv[]) 
{
    bool keepRunning = true;
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else {
        // this loop will keep the program running until user wants to quit
        while (true) {
            if (!program()) // call program
                break; // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}

void printMenu(void) 
{
    cout << "Menu options:\n";
    cout << "[1] Sum\n";
    cout << "[2] Average\n";
    cout << "[3] Product\n";
    cout << "[4] Divide\n";
    cout << "[5] Power\n";
    cout << "[6] Sqare root\n";
    cout << "[7] Quit the program\n";
    cout << "Enter one of the menu options [1-7]: ";
}

void getFiveNumbers(double &n1, double &n2, double &n3, double &n4, double &n5)
{
    cout << "Enter five numbers separated by a space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}


double FindSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
double sum = n1 + n2 + n3 + n4 +n5;
return sum;
}

double FindProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
double product = n1*n2*n3*n4*n5;
return product;
}
   
double FindAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
double average = (n1 + n2 + n3 + n4 +n5)/5;
return average;
}
   


void test() 
{
    double answer = FindSum(10, 12.5);
    double expected = 22.5;
    assert(answer == expected); 
    assert(FindSum(-5, 10.5) == 5.5);

    assert(FindDifference(8.0, 3.0)==5.0);
    assert(FindDifference(7.2, 4.0)==3.2);
    assert(FindProduct(3.0, 2.0)==6.0);
    assert(FindProduct (6.0, 5.0)==30.0);
   
}

bool program() 
{
    int option = 1;
    double num1=0, num2=0; 
    printMenu();
   
    do {
        if (cin >> option && option >= 1 && option <= 8) {
           
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);
            
  
    switch(option) {
        case 1:
        {
            
            getFiveNumbers(num1, num2, num3, num4, num5);
            double sum = FindSum(num1, num2, num3, num4, num5);
            printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
            break;
        }
        case 2:
        {
            getTwoNumbers(num1,num2);
            cout << FindDifference(num1,num2) << endl; 
            break;
        }
        case 3:
        {
            getTwoNumbers(num1,num2);
            cout << FindProduct(num1,num2) << endl;
            break;
        }
      
        case 4: 
        {
            getTwoNumbers(num1,num2);
            cout << FindQuotient(num1,num2) << endl;
            break;

        }
        case 5:
        {
           
            getTwoNumbers(num1, num2);
            double max = FindPower(num1, num2);
            break;
        }
        case 6:
        {
            getTwoNumbers(num1,num2);
            double min = FindSqrt(num1,num2);
            break;

        }
      
        case 7:
        default:
            return false; 
    }
    return true;
}