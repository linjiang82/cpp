#ifndef MAGE_H
#define MAGE_H

#include "Player.h"
#include <string>

class Mage : public Player {
public:
  Mage(string name, Race race) : Player(name, race, 150, 150){};
  ~Mage(){};
  string attack() const {
    return "I will crush you with the power of my arcane missiles!";
  }
};

#endif
