// get from user which crypt method they would like to user
// print before and after from code
//
#include <iostream>
#include <string>
#include "caesar.h"
#include "vigenere.h"
#include "rsa.h"

int main () {
  int choice;
  std::string word;
  std::string encryptedString;
  std::string key;
  std::cout << "Which Cryptographic method would you like to use" << std::endl;
  std::cout << "1. Caesar\t2. Vigenere\t3. RSA" << std::endl;
  std::cin >> choice;
  std::cout << "Enter a word or phrase you would like encrypted" << std::endl;
  std::cin >> word;
  switch (choice) {
    // caesar cypher
    case 1:
      std::cout << "Running the Caesar method for: " << word << std::endl;
      encryptedString = encryptCaesar(word);
      break;
    // vigenere cypher
    case 2:
      std::cout << "Running the Vigenere cipher for " << word << std::endl;
      std::cout <<"What is they key to encode it with" << std::endl;
      std::cin >> key;
      encryptedString = encryptVigenere(word, key);
      break;
    // RSA cipher
    case 3:
        std::cout << "Running the RSA cipher for " << word << std::endl;
        encryptedString = encryptRSA(word);
        break;
  }
  // print out result
  std::cout << "Result: " << encryptedString << std::endl;
  return 0;
}
