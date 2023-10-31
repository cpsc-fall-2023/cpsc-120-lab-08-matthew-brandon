// Matthew Torres
// MatthewST@csu.fullerton.edu
// @MatthewST05
// Partners: @brandont118

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  double number{0.0};
  bool first{true};
  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    number += std::stod(argument);
  }
  // Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  int den = static_cast<int>(arguments.size()) - 1;
  double average = number / den;
  // After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  std::cout << "average = " << average << "\n";
  // Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}