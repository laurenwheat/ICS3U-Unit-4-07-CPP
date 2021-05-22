// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program adds numbers

#include <iostream>

int main() {
    int loopCounter;

    for (loopCounter = 1000; loopCounter <= 2000; loopCounter++) {
        if (loopCounter % 5 == 0) {
            std::cout << loopCounter << " " << std::endl;
        } else {
            std::cout << loopCounter << " ";
        }
    }
}
