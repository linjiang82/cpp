#ifndef DOG_H
#define DOG_H
#include "Animal.h"

class Dog : public Animal {
public:
  Dog(string name, double weight, string breed);
  ~Dog();
  string getBreed() const;
  void digHole();
  string makeNoise();
  string eat();

private:
  string breed;
};
#endif
