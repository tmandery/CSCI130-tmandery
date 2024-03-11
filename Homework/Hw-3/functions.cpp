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
bool program();
void printMenu(void);
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
    cout << "[1] Add\n";
    cout << "[2] Subtract\n";
    cout << "[3] Multiply\n";
    cout << "[4] Divide\n";
    cout << "[5] Power\n";
    cout << "[6] Sqare root\n";
    cout << "[7] Quit the program\n";
    cout << "Enter one of the menu options [1-7]: ";
}

void getTwoNumbers(double &n1, double &n2)
{
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
}


double FindSum(const double &n1, const double &n2)
{
double sum = n1 + n2;
return sum;
}

double FindProduct(const double &n1, const double &n2)
{
double product = n1*n2;
return product;
}
   
double FindDifference(const double &n1, const double &n2)
{
double difference = n1-n2;
return difference;
}
   
double FindQuotient(const double &n1, const double &n2)
{
double quotient = n1/n2;
return quotient;
}

double FindPower(const double &n1, const double &n2)
{
double power =  pow(n1,n2);
return power;
}
   
double FindSqrt(const double &n1, const double &n2)
{
double sqrt1 = sqrt(n1);
double sqrt2 = sqrt(n2);
return sqrt1,sqrt2;
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
            
            getTwoNumbers(num1, num2);
            double sum = FindSum(num1, num2);
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