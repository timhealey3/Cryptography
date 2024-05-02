#include "caesar.h"

std::string encryptCaesar(std::string word) {
  // caesar encryption
  // traditionally use 3 letter shift
  int asciiVal;
  int shiftVal;
  int leftOver;
  const int lower_a = 97;
  const int upper_a = 65;
  //const int lower_z = 122;
  std::string answer = "";

  for (char c : word) {
    asciiVal = static_cast<int>(c);
    shiftVal = asciiVal + 3;
    // if letter is upper case
    if (asciiVal > 64 && asciiVal < 91) {
      if (shiftVal > 90) {
        leftOver = shiftVal - 90;
        shiftVal = upper_a + leftOver - 1;
      }
    }
    // if letter is lower case
    if (asciiVal > 96 && asciiVal < 123){
      if (shiftVal > 122) {
        leftOver = shiftVal - 122;
        shiftVal = lower_a + leftOver - 1;
      }
    }
    char charVal = static_cast<char>(shiftVal);
    answer.push_back(charVal);
  }

  return answer;
}
