#include "Circle.h"
#include <iostream>
#include <ostream>

int main() {
  Circle c1;
  Circle c2(3);

  std::cout << c1.circumference() << std::endl;
  std::cout << c2.circumference() << std::endl;
  return 0;
}
