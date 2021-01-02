#ifndef WORRIER_H
#define WORRIER_H

#include "Player.h"
#include <string>

class Worrier : public Player {
public:
  Worrier(string name, Race race) : Player(name, race, 200, 0){};
  ~Worrier(){};
  string attack() const {
    return "I will destroy you with my sword, foul demon!";
  }
};

#endif
