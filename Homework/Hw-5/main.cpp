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

void testCheckGuess()
{
    assert(checkGuess(3,3)==0);
    assert(checkGuess(4,5)==-1);
    assert(checkGuess(12,4)==2);

}

void gameplay()
{
    string Name;
    cout << "Welcome to the Guess a Number Game" << endl;
    cout << "Enter Players Name" << endl;
    cin >> Name;
    cout << "Welcome " << Name << ", I am thinking of a number between q and 20." << endl;
    cout << " You will have 6 tries to guess the number" << endl;

    int GamesPlayed=0, GamesWon=0;
    char PlayAgain;
    do
    {
        int SecretNumber = randomNumber();
        int guess, guessResult;
        int tries =0;
        bool Win = false;
    while(tries < 6)
    {
        guess = readNumber();
        guessResult = checkGuess(guess,SecretNumber);
        tries++;
            if(guessResult ==0)
            {
                cout << "Congratulations, " << Name << "You win! You guessed my number in "<< tries << "guesses "<< endl;
                GamesWon++;
                Win=true;
                break;

            }
            else if(guessResult == -1)
            {
                cout << "Your guess is too low" << endl;
        
            }
            else 
            {
                cout << "Your guess is too high" << endl;
            }
    if(!Win)
    {
        cout << "Sorry " << Name << " You lost. The number was " << SecretNumber << endl;
    }

    }

    GamesPlayed++;
    cout << "Would you like to play again? Enter [y/Y], anything else to quit" << endl;
    cin>> PlayAgain;
        
} while (PlayAgain=='y'||PlayAgain=='Y');



cout <<"Games played: "<< GamesPlayed << endl;
cout << " Percentage of wins: " << static_cast<double>(GamesWon)/ GamesPlayed * 100 << "%"<< endl;
cout << "Percentage of losses: " << 1-static_cast<double>(GamesWon)/ GamesPlayed * 100 << "%"<< endl;
}

int main()
{
    srand(time(0));
    testCheckGuess();
    gameplay();
    return 0;
}