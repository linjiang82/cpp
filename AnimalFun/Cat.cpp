#include "Cat.h"
#include "Animal.h"
#include <iostream>

using namespace std;
Cat::Cat(string name, double weight) : Animal(name, weight){};
Cat::~Cat(){};
void Cat::chaseMouse() { cout << "I am chasing a mouse" << endl; };
string Cat::makeNoise() { return "meow"; }
string Cat::eat() { return "I love kitten food"; }
