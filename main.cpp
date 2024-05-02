// get from user which crypt method they would like to user
// print before and after from code
//
#include <iostream>
#include <string>
#include "caesar.h"

int main () {
  int choice;
  std::string word; 
  std::string encryptedString;
  std::cout << "Which Cryptographic methoud would you like to use" << std::endl;
  std::cout << "1. Caesar\t2. Other" << std::endl;
  std::cin >> choice;
  std::cout << "Enter a word or phrase you would like encrypted" << std::endl;
  std::cin >> word;
  switch (choice) {
    case 1:
      std::cout << "Running the Caesar method for: " << word << std::endl;
      encryptedString = encryptCaesar(word);
      break;
    case 2:
      std::cout << "other" << std::endl;
      break;
  }
  // print out result
  std::cout << "Result: " << encryptedString << std::endl;
  return 0;
}
