#include "Dog.h"
#include "Animal.h"
#include <iostream>

using namespace std;
Dog::Dog(string name, double weight, string breed) : Animal(name, weight) {
  this->breed = breed;
};
Dog::~Dog(){};
string Dog::getBreed() const { return this->breed; };
void Dog::digHole() { cout << "I am digging a hole" << endl; };
string Dog::makeNoise() { return "woof"; }
string Dog::eat() { return "I love dog food"; }
