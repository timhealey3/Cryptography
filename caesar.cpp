#include "caesar.h"

std::string encryptCaesar(std::string word) {
  // caesar encryption
  // traditionally use 3 letter shift
  int asciiVal;
  int shiftVal;
  int leftOver;
  const int lower_a = 97;
  //const int lower_z = 122;

  for (char c : word) {
    asciiVal = static_cast<int>(c);
    shiftVal = asciiVal + 3;
    if (shiftVal > 96){
    if (shiftVal > 122) {
      leftOver = shiftVal - 122;
      shiftVal = lower_a + leftOver - 1;
    }
    std::cout << shiftVal << std::endl;
    // if above some num move it back to 90?
  }
  }
  return word;
}
