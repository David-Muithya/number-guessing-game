#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    int target = rand() % 100 + 1;  // Random number between 1 and 100
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess it!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > target) {
            cout << "Too high! Try again.\n";
        } else if (guess < target) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != target);  // Repeat until the correct guess

    return 0;
}
