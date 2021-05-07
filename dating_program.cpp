// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program uses 'and' and tells the user if they are the right age to
//    date someone's grandchild

#include <iostream>
#include <string>

int main() {
    // This function tells the user if they can date the grandchild
    std::string ageAsString;
    int ageAsInteger;

    // Input
    std::cout << "This program will tell you if you can date my grandchild."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter your age: ";
    std::cin >> ageAsString;

    // Process & Output
    try {
        ageAsInteger = std::stoi(ageAsString);

        if (ageAsInteger > 25 && ageAsInteger < 40) {
                std::cout << "You are allowed to date my grandchild."
                    << std::endl;
        } else if (ageAsInteger <= 25) {
            std::cout << "Sorry, you're too young!" << std::endl;
        } else if (ageAsInteger >= 40) {
            std::cout << "You're too old!" << std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << ageAsString << " is not a valid input." <<std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
