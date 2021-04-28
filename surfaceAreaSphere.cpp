// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: April 2021
// This program calculates the surface area of a sphere
//    with any radius

#include <iostream>
#include <cmath>

int main() {
    // variable declarations
    int length;
    int width;
    int area;
    // input
    std::cout << "We will calculate the area of a rectangle. " << std::endl;
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;
    // process
    area = length*width;
    // output
    std::cout << "Area is " << (area) << "mm2" << std::endl;
}
