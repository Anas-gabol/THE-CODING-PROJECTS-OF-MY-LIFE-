//number guessing game guess a number btw 1/100
#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Define the range for the random number
    const int MIN = 1;
    const int MAX = 100;
    int target = std::rand() % (MAX - MIN + 1) + MIN; // Generate a random number between MIN and MAX

    int guess = 0;         // Variable to store the player's guess
    int attempts = 0;      // Counter for the number of attempts

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Guess a number between " << MIN << " and " << MAX << ": ";

    // Loop until the player guesses the correct number
    while (guess != target) {
        std::cin >> guess;  // Read the player's guess
        attempts++;         // Increment the attempt counter

        if (guess < target) {
            std::cout << "Too low! Try again: ";
        } else if (guess > target) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;  // End the program successfully
