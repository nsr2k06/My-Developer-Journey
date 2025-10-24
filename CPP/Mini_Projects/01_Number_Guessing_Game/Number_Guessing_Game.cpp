
#include <iostream>   // For input and output
#include <cstdlib>   // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {

    cout << "Welcome to the Number Guessing Game!" << endl;
    
    int count = 0; // Initialize guess count
    cout << "You have to guess a number between 1 and 100." << endl;
    cout << "Let's see how many tries it takes you to guess the number!" << endl;
    cout << "Good luck!" << endl;

    // Initialize random seed
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    // Loop until user guesses the correct number
    while (true) {
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high ! Try again: ";
            count++;
        }
        else if (guess < secretNumber) {
            cout << "Too low ! Try again: ";
            count++;
        }
        else {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            cout<< "It took you " << count + 1 << " tries to guess the number." << endl;
            cout << "Thank you for playing!" << endl;
            break;
        }
    }

    return 0;
}
