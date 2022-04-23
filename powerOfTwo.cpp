// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April. 20, 2022
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display the factor
// of a whole number.


#include <iostream>
#include <cmath>
#include <string>

int main() {
  // initialize the loop counter and sum
  std::string user_num_string;
  int user_num_int;
  int power;
  // get the user number as a string
  std::cout << "Enter a number: ";
  std::cin >> user_num_string;
  std::cout << std::endl;

  // convert user input from string to integer
  try {
         user_num_int = std::stoi(user_num_string);
         // run Do while loop to calculate facotor of number
          if (user_num_int < 0) {
              std::cout <<"input was not a positive number" << std::endl;
}
           for (int counter = 0; counter <= user_num_int; counter++) {
               power = pow(counter, 2);
               std::cout << "Tracking " << counter
               << " times through the loop.\n";
               std::cout << counter << "^2" << " = " << power << std::endl;
  }
}

  // catch invalid input
  catch (std::invalid_argument) {
      std::cout <<"Invalid input. Enter a number." << std::endl;
}
}
