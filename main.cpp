#include <iostream>
#include <chrono> // used for a wait / pause
#include <thread> // used for a wait / pause

void welcomeMessage();

int main() {
    welcomeMessage();
    char userWelcomeInput{};
    std::cin >> userWelcomeInput;
    if (userWelcomeInput == 'y' || userWelcomeInput == 'Y') {
        std::cout << "Please enter the length of your first side ";
        double userFirstSideLength{};
        std::cin >> userFirstSideLength;
        std::cout << "Please enter the length of your second side ";
        double userSecondSideLength{};
        std::cin >> userSecondSideLength;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // adds a wait for 1 second
        std::cout << "Thank you!\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "1. Area\n";
        std::cout << "2. Perimeter\n";
        std::cout << "3. Exit\n";
        int userChoice{};
        std::cin >> userChoice;
        if (userChoice == 1) {
            std::cout << "Area is " << userFirstSideLength * userSecondSideLength;
        } else if (userChoice == 2) {
            std::cout << "Perimeter is " << userFirstSideLength * 2 + userSecondSideLength * 2;
        } else if (userChoice == 3) {
            std::cout << "Goodbye :(";
            return 0;
        }

    } else {
        std::cout << "So sad to see you go already :(";
    }
    return 0;
}

/* version 1.0.1 | made by Alex Briggs | Coded on Clion */