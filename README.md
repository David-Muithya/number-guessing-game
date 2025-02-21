# number-guessing-game
In this project, the computer randomly selects a number between 1 and 100, and the user has to guess the number. The program will give hints whether the guess is too high or too low.

This program is a number guessing game where the computer selects a random number between 1 and 100, and the user tries to guess it. The program provides feedback on whether the user's guess is too high or too low and keeps track of the number of attempts made. The game continues until the user correctly guesses the number

<u>**1. Libraries and Namespace**</u>

**#include <iostream>:** Includes the input-output stream library to use cin and cout for input and output operations.

**#include <cstdlib>:** Includes the C standard library for functions like rand() and srand().

**#include <ctime>:** Includes the C time library for functions like time().

**using namespace std;:** Allows us to use standard library objects like cout and cin without prefixing them with std::

**2. Main Function**

**srand(time(0)):** Seeds the random number generator with the current time. This ensures that different random numbers are generated each time the program is run.

**int target = rand() % 100 + 1;:** Generates a random number between 1 and 100 and assigns it to the target variable.

**int guess;**: Declares a variable to store the user's guess.

**int attempts = 0;**: Initializes the attempts variable to count the number of guesses made by the user.

**cout << "Welcome to the Number Guessing Game!\n";**: Displays a welcome message to the user.

**3. Main Loop**

**do { ... } while (guess != target);**: A do-while loop that repeats until the user correctly guesses the target number.

**cout << "Enter your guess: ";**: Prompts the user to enter their guess.

**cin >> guess;**: Reads the user's guess from the input.

**attempts++;**: Increments the attempts counter by 1.

**if (guess > target):** Checks if the guess is greater than the target number. If so, it displays "Too high! Try again."

**else if (guess < target):** Checks if the guess is less than the target number. If so, it displays "Too low! Try again."

**else:** If the guess is equal to the target number, it displays a congratulatory message and the number of attempts made.
