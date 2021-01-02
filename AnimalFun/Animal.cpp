#include "Animal.h"

using namespace std;
Animal::Animal(string name, double weight) {
  this->name = name;
  this->weight = weight;
};
Animal::~Animal(){};
string Animal::getName() const { return this->name; };
void Animal::setName(string name) { this->name = name; };
double Animal::getWeight() const { return this->weight; };
void Animal::setWeight(double weight) { this->weight = weight; };
// string Animal::makeNoise() { return "unkonw"; }
// string Animal::eat() { return "don't konw"; }
