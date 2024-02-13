/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Tristan Mandery> #FIXME1
    Date: 2/5/2024 #FIXME2
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    //FIXME3: declare a variable to store name
    
    string name;
    //FIXME4: prompt user  enter their name and store the value in variable
    cout << "Please enter your Name" << endl;
    getline ( cin, name);
    //FIXME5: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>!
    cout << "Nice to meet you " << name << endl;
    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "   |\\/_/|     *****************************    (\\/_/)\n";
    cout << line1;

    //FIXME6: use variable to print the second line line of the graphic
    string line2 = "  /  @  @\\    *        ASCII Lab          *    (='.'=)\n";
    cout << line2;
    
    //FIXME7: print the third line of the graphics
    string line3 =  "( >   0  <  ) *   By: <Tristan Mandery>   *   ( \" )( \" )\n "; 
    cout << line3;
    //FIXME8: use variable to print the fourth line
    string line4 = "  >>x<<      *          CSCI 111         * \n ";
    cout << line4; 
    //FIXME9: use variable to print the fifth line
    string line5= " /   O  \\/   ***************************** \n "; 
    cout << line5;
      

    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input
    cin.get();
    return 0; //exit program by returning 0 status to the system
}