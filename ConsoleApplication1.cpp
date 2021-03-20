#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

// Guessing game using While loops and If statements

void myGuess() {
// Function for Guessing game
	string word = "Tesla"; // word to guess 
	int attempts = 3;  // Number of attempts 
	int i = 0; // initalize i to zero 
	while (i < attempts) {
		string guess; // declaring data type of guess 
		cout << "Enter your guess: "; // Input from user
		cin >> guess; // Binding user input to var guess 
		transform(guess.begin(), guess.end(), guess.begin(), ::toupper); // using transform to upper case guess
		transform(word.begin(), word.end(), word.begin(), ::toupper); // using transform to upper case word
		i++; // incrementing i by 1 every call
		if (guess != word && i != attempts) {
			cout << "Try Again!" << endl;  // console will print, if input does not match word up to attempt times
		}
		else if (guess == word) {
			// else if block to check if user input matches word 
			cout << "You Win!" << endl; 
			cout << "you guessed it in " << i << " tries" << endl;
			break; // Program will end if User input matches word 
		}

		else  {
		// if out of attempts, this block will execute
		cout << "You are out of attempts!" << endl;  
	}
	}
}
int main() {
	// Calling function in main for execution 
	myGuess(); 
	return 0; 

}