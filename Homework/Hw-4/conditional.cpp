/*
Tristan Mandery

Hw-4 CLI Menu, Conditionals, Functions and Testing


Date-  March/24/2024

*/
/*Program intent
Write a command line interface (CLI) based menu-driven C++ program 
that computes certain values such as sum, product, max, min, average, oddity 
of any 5 given numbers along with the following requirements. 

*/




#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;

void test();
bool program();
const float epsilon = 1e-5;
enum FloorType { EVEN, ODD, ZERO};
void printMenu(void);
void getFiveNumbers(double &, double &, double &, double &, double &);
double FindSum(const double &, const double &,const double &, const double &, const double &);
double FindProduct(const double &, const double &,const double &, const double &, const double &);
double FindMax (const double &, const double &,const double &, const double &, const double &);
double FindMin (const double &, const double &,const double &, const double &, const double &);
void FindAverage (const double &, const double &,const double &, const double &, const double &);
FloorType Floortype(const double &, const double &,const double &, const double &, const double &);

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
    cout << "[1] Sum of five numbers\n";
    cout << "[2] Product of five numbers\n";
    cout << "[3] Max of five numbers\n";
    cout << "[4] Min of five numbers\n";
    cout << "[5] Average of five numbers \n";
    cout << "[6] Even or odd\n";
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
   
double FindMax(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
double max = n1;
if (n2,max) {
    max=n2;
}
if (n3,max) {
    max=n3;
}
if (n4,max) {
    max=n4;
}
if (n5,max) {
    max=n5;
}
return max;
}
   
double FindMin(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5)
{
double min = n1;
if (n2,min) {
    min=n2;
}
if (n3,min) {
    min=n3;
}
if (n4,min) {
    min=n4;
}
if (n5,min) {
    min=n5;
}
return min;
}

FloorType Floortype(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5 )
{
    int sum = n1 + n2 + n3 + n4 + n5;
    int floorsum = floor(sum);

    if(floorsum ==0)
        return ZERO;
    else if (floorsum %2 ==0)
        return EVEN;
    else   
        return ODD;
}

void FindAverage (const double &n1, const double &n2, const double &n3, const double &n4, const double &n5, double &avg)
{
    avg = FindSum(n1,n2,n3,n4,n5)/5;
}

void test() 
{
    double answer = FindSum(1,2,3,4,5);
    double expected = 15;
    assert(answer == expected); 
    assert(FindSum(-1,-2,-3,-4,-5) == -15);

    double answer= FindProduct(1,2,3,4,5);
    expected = 120;
    assert(answer == expected);
    assert(FindProduct(3,4,5,6,7)==2520);
    assert(FindProduct(10,7,4,3,1)==840);

    double answer = FindMax(1,2,3,4,5);
    expected=5;
    assert(answer==expected);
    assert(FindMax(4,5,6,7,8)==8);
    assert(FindMax(-1,-10,-30,4,0)==4);

    double answer = FindMin(1,2,3,4,5);
    expected=1;
    assert(answer==expected);
    assert(FindMin(4,5,6,7,8)==4);
    assert(FindMin(-1,-10,-30,4,0)==-30);

    double avg;
    FindAverage(1,2,3,4,5,avg);
    expected==3;
    assert(abs(avg-expected)<=epsilon);
    FindAverage(3,6,9,12,15,avg);
    expected=9;
    assert(abs(avg-expected)<=epsilon);

    assert(Floortype(2,3,5,7,11)==ODD);
    assert(Floortype(2,3,11,15,17)==ODD);
    assert(Floortype(0,0,0,0,0)==ZERO);
    assert(Floortype(2,4,6,8,12)==EVEN);

    cout<< "All tests passed"<< endl;

}

bool program() 
{
    int option = 1;
    double num1=0, num2=0,num3=0,num4=0,num5=0; 
    printMenu();
   
    do {
        if (cin >> option && option >= 1 && option <= 7) {
           
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 7" << endl;
        }
    } while (true);
            
  
    switch(option) {
        case 1:
        {
            
            getFiveNumbers(num1, num2, num3, num4, num5);
            double sum = FindSum(num1, num2, num3, num4, num5);
            printf("%.2f + %.2f+%.2f + %.2f + %.2f = %.2f\n", num1, num2,num3,num4,num5 ,sum);
            break;
        }
        case 2:
        {
            getFiveNumbers(num1,num2, num3, num4, num5);
            cout << FindProduct(num1,num2, num3, num4, num5) << endl; 
            break;
        }
        case 3:
        {
            getFiveNumbers(num1,num2, num3, num4, num5);
            cout << "Max of"<< FindMax(num1,num2, num3, num4, num5) << endl;
            break;
        }
        case 4: 
        {
            getFiveNumbers(num1,num2, num3, num4, num5);
            cout << "Min of"<< FindMin(num1,num2, num3, num4, num5) << endl;
            break;

        }
        case 5:
        {
           
            getFiveNumbers(num1,num2, num3, num4, num5);
            double avg;
            FindAverage(num1,num2, num3, num4, num5,avg);
            printf("Average of%.2f,%.2f,%.2f,%.2f,%.2f is %.2f\n", num1, num2,num3,num4,num5 ,avg);
            
            break;
        }
        case 6:
        {
            getFiveNumbers(num1,num2, num3, num4, num5);
            FloorType result = Floortype(num1,num2, num3, num4, num5);
            if(result==EVEN)
                cout <<"Floor of the sum is EVEN" << endl;
            else if(result==ZERO)
                cout << "Floor of the sum is ZERO" << endl;
            else(result==ODD);
                cout << "Floor of the sum is ODD" << endl;
            break;

        }
      
        case 7:
        default:
            return false; 
    }
    return true;
}