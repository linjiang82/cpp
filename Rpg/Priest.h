#ifndef PRIEST_H
#define PRIEST_H
#include "Player.h"
#include <string>

class Priest : public Player {
public:
  Priest(string name, Race race) : Player(name, race, 100, 200){};
  ~Priest(){};
  string attack() const { return "I will assault you with Holy Wrath!"; }
};

#endif
