/*
Tristan Mandery


Functions

*/
#include <iostream>
using namespace std;


void sayHello()
{
    cout << "Hello World" << endl;
}

int addToNumber()
{
    int someNumber;
    someNumber = 42;
    someNumber += 10;
    return someNumber; 
}

int main()
{
  int result;
  result = addToNumber();
  cout << "addToNumber: " << result << endl;
  return 0;

}