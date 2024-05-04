#include "vigenere.h"

std::string encryptVigenere(std::string word, std::string key) {
  // polyalphabetic substitution
  // table consists of alphabets written out 26 times in different rows
  // each alphabet shifted to the left and compared to prev
  // meaning 26 possible caesar ciphers
  // make key same size of word
  if (word.length() != key.length()) {
    // wrap key around

  }
  return word;
}
