#include "rsa.h"

std::string encryptRSA(std::string word, int userChoice) {
    double primeOne;
    double primeTwo;
    // get two prime numbers from user
    if (userChoice == 0) {
        std::cout << "Enter in two PRIME numbers" << std::endl;
        std::cin >> primeOne;
        std::cin >> primeTwo;
    } else { // generate random prime numbers
        std::string todo = "things";
    }


    // public v private keys
    std::string publicKey = "";
    std::string privateKey = "";
    std::cout << "Public Key: " << publicKey << std::endl;
    // TODO: change prime numbers
    primeOne = 3;
    primeTwo = 7;
    // first part of public key
    double halfPubKey = primeOne * primeTwo;
    // find outher part of public key
    double encrypt = 2;
    //
    return word;
}
