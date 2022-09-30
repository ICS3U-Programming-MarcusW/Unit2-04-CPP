// Copyright (c) 2022 Marcus Wehbi All rights reserved.
// Created by: Marcus Wehbi
// Date: Sep 29th, 2022
// This program asks the user for the
// diameter of the pizza and then
// calculates the total cost with HST.
#include <iostream>
#include <iomanip>

int main() {
  // declare constants
  const float LABOUR_COST = 2.00;
  const float RENTAL_COST = 2.25;
  const float INGRED_COST = 1.50;
  const float TAX_RATE = 0.13;

  // declare variables
  int diameter;
  float subtotal, tax, total;

  // get the user input
  std::cout << "Enter the diameter (inches): ";
  std::cin >> diameter;

  // calculate subtotal, tax and the total
  subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
  tax = subtotal * TAX_RATE;
  total = subtotal  + tax;

  // display total
  std::cout << "The total with HST is: $" << std::fixed << std::setprecision(2)
  << std::setfill('0') << total << "\n";
}
