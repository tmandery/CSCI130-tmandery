/*
Tristan Mandery

Hw-5 Guess a number loop


Date-  March/26/2024

*/
/*Program intent
1. Greet the player and ask for their name 
2. Have a random number generated and then stored within the program
3. Ask player to make a guess of the number between 1 and 20
4. Using if statements test the guessed number with the generated number and return result
5. Allow for the player to guess 6 times 
6. After each attempt show whether the guess is too high or low
7. If they guess the correct number show Victory and if they run iut if guesses show Defeat
8. Display game stats
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

int randomNumber() //generates a random number between 1 and 20
{
    return rand() % 20+1;
}

int readNumber()
{
    int guess;
    do
    {
        cout << "Make a guess.";
        cin >> guess;
        if(guess<1||guess>20)
        {
            cout << "Please enter a number between 1 and 20" << endl;
        }
    }
    while(guess<1|| guess>20);
    return guess;
}
int checkGuess(int guess ,int randomNumber)
{
    if(guess== randomNumber)
    return 0;
    if(guess < randomNumber)
    return -1;
    return 2;

}