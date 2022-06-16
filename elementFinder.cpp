// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: June 2022
// This program finds an element in a list

#include <iostream>
#include <list>


int ElementFinder(std::list<int> listOfElements, int singleElement) {
    // this function checks if the element occurs

    for (int counter : listOfElements) {
        if (counter == singleElement) {
            singleElement = true;
        }
    }

    return singleElement;
}

main() {
    // this functionn adds elements to a list

    std::list<int> elements;
    int element;
    int elementToFind;
    int foundElement;

    // call functions
    while (true) {
        try {
            // input
            while (element != -1) {
                std::cout <<
                "Enter a number to enter into the array, -1 to stop: ";
                std::cin >> element;
                if (std::cin.fail()) {
                    throw "error";
                }
                elements.push_back(element);
            }
            std::cout << "Enter a number check if it's in the array: ";
            std::cin >> elementToFind;
            if (std::cin.fail()) {
                throw "error";
            }
            break;
        } catch (const char* error) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "That is not an integer, try again." << std::endl;
            continue;
        }
    }
    elements.pop_back();
    foundElement = ElementFinder(elements, elementToFind);
    if (foundElement == true) {
        std::cout << "\nThe element was inside the list." << std::endl;
    } else {
        std::cout << "\nThe element was not inside the list." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
