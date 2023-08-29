#include <iostream>
#include <ctime> // Include the header for time functions
using namespace std;

// Function to print a message inside a box
void printBox(const string &message)
{
    int length = message.length() + 4;
    cout << "+" << string(length, '-') << "+" << endl;
    cout << "| " << message << " |" << endl;
    cout << "+" << string(length, '-') << "+" << endl;
}

int main()
{
    int guess = -1;
    printBox("Number Guessing Game!"); // Print a box with the game title
    cout << "Welcome to the Number Guessing Game! I'm thinking of a number between 1 and 10." << endl;

    srand(time(NULL));         // Seed the random number generator with the current time
    int num = rand() % 10 + 1; // Generate a random number between 1 and 10

    // Keep looping until the user guesses the correct number
    while (guess != num)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > num)
        {
            cout << "Too high! Try a lower number." << endl;
        }
        else if (guess < num)
        {
            cout << "Too low! Try a higher number." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed it!" << endl;
        }
    }

    // Display the number in a box at the end of the game
    printBox("The number was " + to_string(num) + ". Thanks for playing!");

    return 0;
}
