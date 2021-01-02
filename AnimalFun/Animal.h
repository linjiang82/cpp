#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;
class Animal {
public:
  Animal(string name, double weight);
  virtual ~Animal() = 0;
  string getName() const;
  void setName(string name);
  double getWeight() const;
  void setWeight(double weight);
  virtual string makeNoise() = 0;
  virtual string eat() = 0;

private:
  string name;
  double weight;
};

#endif
