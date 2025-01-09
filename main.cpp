#include <iostream>
#include <chrono> // used for a wait / pause
#include <thread> // used for a wait / pause

void welcomeMessage();
void getUserAreaPerimeterExit();
void askUserExit();
int userCalculations(int userChoice, double userFirstSideLength, double userSecondSideLength);



int main() {
    welcomeMessage();
    char userWelcomeInput{};
    std::cin >> userWelcomeInput;
    bool userExit{};
    while (userExit == false) {
        if (userWelcomeInput == 'y' || userWelcomeInput == 'Y') {
            std::cout << "Please enter the length of your first side ";
            double userFirstSideLength{};
            std::cin >> userFirstSideLength;
            std::cout << "Please enter the length of your second side ";
            double userSecondSideLength{};
            std::cin >> userSecondSideLength;
            getUserAreaPerimeterExit();
            int userChoice{};
            std::cin >> userChoice;
            userCalculations(userChoice, userFirstSideLength, userSecondSideLength);

        } else {
            std::cout << "So sad to see you go already :(";
            return 0;
        }

        askUserExit();
        char userExitInput{};
        std::cin >> userExitInput;
        if (userExitInput == 'y' || userExitInput == 'Y') {
            bool exit = false;
        }


    }
    return 0;
}

/* version 1.1| made by Alex Briggs | made in Clion */