#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>

using namespace std;
int main() {
  Dog d = Dog("haha", 18.0, "sauage");
  // Animal a = Animal("xixi", 3.14);
  Animal *a = new Dog("xixi", 3.14, "Laplado");
  Animal *b = new Cat("dongdong", 2.14);

  cout << a->getName() << endl;
  cout << a->getWeight() << endl;
  cout << a->makeNoise() << endl;
  cout << a->eat() << endl;
  cout << ((Dog *)a)->getBreed() << endl;
  ((Dog *)a)->digHole();
  cout << b->getName() << endl;
  cout << b->getWeight() << endl;
  cout << b->makeNoise() << endl;
  cout << b->eat() << endl;
  ((Cat *)b)->chaseMouse();
  delete a;
  delete b;
  a = nullptr;
  b = nullptr;

  return 0;
}
