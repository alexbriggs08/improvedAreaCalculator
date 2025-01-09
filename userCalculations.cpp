//
// Created by Alex Briggs on 1/9/25.
//

#include <iostream>

int userCalculations(int userChoice, double userFirstSideLength, double userSecondSideLength) {
    if (userChoice == 1) {
        std::cout << "Area is " << userFirstSideLength * userSecondSideLength;
    } else if (userChoice == 2) {
        std::cout << "Perimeter is " << userFirstSideLength * 2 + userSecondSideLength * 2;
    } else if (userChoice == 3) {
        std::cout << "Goodbye :(";
        return 0;
    }
}