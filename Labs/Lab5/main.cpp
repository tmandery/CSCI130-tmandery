/*
    Loops Lab
    Updated By: Tristan Mandery
    CSCI 130
    Date: 02/28/2024

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void printTriangle(int height) {
    //Function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}


void printFlippedTriangle(int height) {

    /* 
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * *
    *
    
    */
    
    int row = 1;
    while(row <= height){
        for(int column = height; column >= row; column--){
            cout << "* ";
        }
        row += 1;
        cout << endl;
    }
} //FIXED#3

void printSquare(int height) {
    for(int row =1; row <= height; row++ ) {
         for(int column = 1; column <= height; column++ ) {
            cout << "* ";
        }
        cout << endl;
    }
}//FIXED #4


/*
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.

*  *  *  *  *  
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   

*/


// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    bool wantsToQuit = false;

    while(not wantsToQuit){ //FIXED#5

    // FIXME5 add a loop to make the program to continue to run until the user wants to quit
    clearScreen(); //FIXED#6
    // FIXME6 call clearScreen function to clear the screen for each round of the loop
    int height;
    cout << "Program prints geometric shapes of given height with *\n";
    cout << "Please enter the height of the shape: ";
    cin >> height;
    // call printTriangle function passing user entered height
    printTriangle(height);

    cout << "\n\n";
    printFlippedTriangle(height); //FIXED#7
   // FIXME7
    // Call printFlippedTriangle passing proper argument
    // Manually test the function


    cout << "\n\n";
    printSquare(height); //FIXED#8
    // FIXME8
    // Call the function defined in FIXME4 passing proper argument
    // Manually test the function

    // FIXME9
    // prompt user to enter y/Y to continue anything else to quit

    // FIXME10
    // Use conditional statements to break the loop or continue the loop

     string quit = "";
        cout << "Want to continue? [n, N, y, Y]\n"; //FIXED#9
        cin >> quit;
        if(quit == "n" or quit == "N"){  //FIXED#10
            wantsToQuit = true;
            cout << "Have a nice day!\n";
        }
        cin.ignore(1000, '\n'); 
    }
    return 0;
}