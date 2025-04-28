// Copyright (C) Chanella All rights reserved
// Created by Chanella
// Created on: April 25, 2025
// This program asks the user to guess a random number between 0 and 9

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 0 and 9
    int randomNumber = std::rand() % 10;

    std::string userGuessStr;
    int userGuess;

    std::cout << "Guess a number between 0 and 9: " << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuessStr;
        // convert the string input into integer
        try {
            userGuess = std::stoi(userGuessStr);

            if (userGuess < 0 || userGuess > 9) {
                std::cout << "Please enter a number between 0 and 9." << std::endl;
            } else if (userGuess == randomNumber) {
                std::cout << "Congratulations! You guessed the number correctly!" << std::endl;
                break;
            } else {
                std::cout << "Sorry, that's not correct. Try again!" << std::endl;
            }
        } catch (std::invalid_argument const &err) {
            std::cout << "Please enter a valid integer." << std::endl;

            // Thank the user after they guessed correctly
            std::cout << "Thank you for using the program!" << std::endl;
        }
            }
            }
    

