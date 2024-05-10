/*
Tristan Mandery
5/13/2024
CSCI 130
Hangman game
*/

#include <algorithm> 
#include <cstdlib> 
#include <ctime> 
#include <iostream> 
#include <string> 
#include <vector> 

// define maximum number of incorrect attempts 
#define MAX_ATTEMPTS 6 

using namespace std; 

// main class 
class HangmanGame { 
public: 
	// constructor to ini 
	HangmanGame() 
	{ 
		srand(static_cast<unsigned int>(time(nullptr))); 
		secretWord = getRandomWord(); 
		currentWord = string(secretWord.length(), '_'); 
		attemptsLeft = MAX_ATTEMPTS; 
	} 

	// function to start the game. 
	void play() 
	{ 
		cout << "Welcome to Hangman!" << endl; 
	
		cout << "You have " << attemptsLeft 
			<< " attempts to guess the word."
			<< endl; 

		
		while (attemptsLeft > 0) { 
			displayGameInfo(); 
			char guess; 
			cout << "Guess a letter: "; 
			cin >> guess; 

			if (isalpha(guess)) { 
				guess = tolower(guess); 
				if (alreadyGuessed(guess)) { 
					cout << "You've already guessed that "
							"letter."
						<< endl; 
				} 
				else { 
					bool correctGuess 
						= updateCurrentWord(guess); 
				
					if (correctGuess) { 
						cout << "Good guess!" << endl; 
						
						if (currentWord == secretWord) { 
							displayGameInfo(); 
							cout << "Congratulations! You "
									"guessed the word: "
								<< secretWord << endl; 
							return; 
						} 
					} 
					else { 
						cout << "Incorrect guess." << endl; 
						attemptsLeft--; 
						drawHangman(attemptsLeft); 
					} 
				} 
			} 
			else { 
				cout << "Please enter a valid letter."
					<< endl; 
			} 
		} 

		if (attemptsLeft == 0) { 
			displayGameInfo(); 
			cout << "You've run out of attempts. The word "
					"was: "
				<< secretWord << endl; 
		} 
	} 

private: 
	string secretWord; 
	string currentWord; 
	int attemptsLeft; 
	vector<char> guessedLetters; 

	// select random word from the predefined word 
	string getRandomWord() 
	{ 
		vector<string> words 
			= {  "banana" , "jazz", "quibble","shoot","laugh","truck","music", "cracker","darts",
			"water","towel","light","heavy","weight","shoes","shirt","jacket","photo",
			"lego","vehicle","switch","bottle","chair","student"
				 }; 
		int index = rand() % words.size(); 
		return words[index]; 
	} 

	// checking if the word is already guessed 
	bool alreadyGuessed(char letter) 
	{ 
		return find(guessedLetters.begin(), 
					guessedLetters.end(), letter) 
			!= guessedLetters.end(); 
	} 

	// updating the word after correct guess 
	bool updateCurrentWord(char letter) 
	{ 
		bool correctGuess = false; 
		for (int i = 0; i < secretWord.length(); i++) { 
			if (secretWord[i] == letter) { 
				currentWord[i] = letter; 
				correctGuess = true; 
			} 
		} 
		guessedLetters.push_back(letter); 
		return correctGuess; 
	} 

	// function to provide the info at particular point in 
	// the game 
	void displayGameInfo() 
	{ 
		cout << "Word: " << currentWord << endl; 
		cout << "Attempts left: " << attemptsLeft << endl; 
		cout << "Guessed letters: "; 
		for (char letter : guessedLetters) { 
			cout << letter << " "; 
		} 
		cout << endl; 
	} 

	// function to progressively draw the hangman 
	void drawHangman(int attemptsLeft) 
	{ 
		// asci art for hangman
		if (attemptsLeft == 5) { 
	string label1; 
    string stage1;
    label1 = "Stage 1";
    stage1 = "  |-----------------\n  |//       |\n  |        ( )\n  |\n  |\n  |\n  |\n=========== \n     "; 
    cout << label1 << endl;
    cout << stage1 << endl; 
		} 
		else if (attemptsLeft == 4) { 
	string label2; 
    string stage2;
    label2 = "Stage 2";
    stage2 = "  |-----------------\n  |//       |\n  |        ( )\n  |         |\n  |\n  |\n  |\n=========== \n     "; 
    cout << label2 << endl;
    cout << stage2 << endl; 
		} 
		else if (attemptsLeft == 3) { 
	string label3; 
    string stage3;
    label3 = "Stage 3";
    stage3 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\n  |\n  |\n  |\n=========== \n     ";
    cout << label3 << endl;
    cout << stage3 << endl; 
		} 
		else if (attemptsLeft == 2) { 
	string label4; 
    string stage4;
    label4 = "Stage 4";
    stage4 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\\\n  |\n  |\n  |\n=========== \n     ";
    cout << label4 << endl;
    cout << stage4 << endl; 
		} 
		else if (attemptsLeft == 1) { 
	string label5;
	string stage5;
    label5 = "Stage 5";
    stage5 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\\\n  |        /\n  |\n  |\n=========== \n     ";
    cout << label5 << endl;
    cout << stage5 << endl; 	
		} 
		else if (attemptsLeft == 0) { 
	string label6; 
    string stage6;
    label6 = "Stage 6";
    stage6 = "  |-----------------\n  |//       |\n  |        ( )\n  |        /|\\\n  |        / \\\n  |\n  |\n=========== \n     ";
    cout << label6 << endl;
    cout << stage6 << endl; 

		} 
	} 
}; 


int main() 
{ 

	HangmanGame game; 
	game.play(); 

	return 0; 
}
