// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program converts temperature in degrees Celsius
//  to temperature degrees Fahrenheit

#include <iostream>


void converter() {
    // This function converts temperature in degrees Celsius
    //  to temperature degrees Fahrenheit
    float fahrenheit = 0;
    float celsius = 0;
    std::string celsius_str;

    // Input
    std::cout <<"Please enter the temperature in degrees Celsius: "<< std::endl;
    std::cin >> celsius_str;

    // Process
    try {
        celsius = std::stof(celsius_str);
        fahrenheit = 1.8 * celsius + 32;
        std::cout << "\nThe temperature in degrees fahrenheit is " <<
         fahrenheit << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
    }
}


int main() {
    converter();
}
