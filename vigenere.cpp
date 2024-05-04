#include "vigenere.h"

std::string encryptVigenere(std::string word, std::string key) {
  // polyalphabetic substitution
  // table consists of alphabets written out 26 times in different rows
  // each alphabet shifted to the left and compared to prev
  // meaning 26 possible caesar ciphers
  // make key same size of word
  if (word.length() != key.length()) {
    // wrap key around
    // if key is longer then slice it at length of word
    if (key.length() > word.length()) {
        key.substr(0, word.length());
    }
    // if key is shorter then repeat it
    if (key.length() < word.length()) {
        int counter = 0;
        while (key.length() < word.length()) {
            key.push_back(key[counter]);
            counter++;
            if (counter >= int(word.length())) {
                counter = 0;
            }
        }
    }
  }

  for (size_t i = 0; i < word.length(); i++) {
      int asciiVal = static_cast<int>(word[i]);
      // if letter is upper case
      if (asciiVal > 64 && asciiVal < 91) {
          word[i] = 'A' + (word[i] + key[i] - 2 * 'A') % 26;
      }
      if (asciiVal > 96 && asciiVal < 123) {
          word[i] = 'a' + (word[i] + key[i] - 2 * 'a') % 26;
      }
  }
  return word;
}
