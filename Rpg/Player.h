#ifndef PLAYER_H
#define PLAYER_H

#include <string>

enum Race { Human, Elf, Dwarf, Orc, Troll };

using namespace std;
class Player {
public:
  Player(string name, Race race, int hitPoints, int magicPoints);
  virtual ~Player();
  string getName() const;
  Race getRace() const;
  string whatRace() const;
  int getHitPoints() const;
  int getMagicPoints() const;
  void setName(string name);
  void setRace(Race race);
  void setHitPoints(int hp);
  void setMagicPoints(int mp);
  virtual string attack() const = 0;

private:
  string name;
  Race race;
  int hitPoints;
  int magicPoints;
};

#endif
