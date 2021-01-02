
#include "AngryCatException.h"
#include <iostream>

void test() { throw AngryCatException("cat is angry twice"); }
int main() {
  try {
    test();

  } catch (const AngryCatException &err) {
    std::cout << err.what() << std::endl;
  }
  return 0;
}
