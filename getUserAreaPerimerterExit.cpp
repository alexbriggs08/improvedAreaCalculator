//
// Created by Alex Briggs on 1/9/25.
//

#include <iostream>
#include <chrono> // used for a wait / pause
#include <thread>

void getUserAreaPerimeterExit() {
    std::this_thread::sleep_for(std::chrono::seconds(1)); // adds a wait for 1 second
    std::cout << "Thank you!\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "1. Area\n";
    std::cout << "2. Perimeter\n";
    std::cout << "3. Exit\n";
}