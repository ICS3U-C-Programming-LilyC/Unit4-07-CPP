// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/15/2023
// This program will display the 5
// integers per line between
// numbers 1000 to 2000.
#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    // Initiating for loop, which will
    // print all the integers from 1000 to 2000.
    for (int counter = 1000; counter <= 2000; counter++) {
        // If statement inside loop.
        // If counter is equal to 1000,
        // then print the counter on the same line.
        if (counter == 1000) {
            std::cout << counter << " ";
            // Else if the counter is
            // divisible by 5 with 0 remainder,
            // then print the counter on the next line.
        } else if (counter % 5 == 0) {
            std::cout << "\n"
            << counter << " ";
            // Else the counter should be printed
            // on the same line.
        } else {
            std::cout << counter << " ";
        }
    }
}

