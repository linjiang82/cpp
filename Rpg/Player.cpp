#include "Player.h"

Player::Player(string name, Race race, int hitPoints, int magicPoints) {
  this->name = name;
  this->race = race;
  this->hitPoints = hitPoints;
  this->magicPoints = magicPoints;
}
Player::~Player() {}
string Player::getName() const { return this->name; }
Race Player::getRace() const { return this->race; }
string Player::whatRace() const {
  switch (this->race) {
  case Human:
    return "Human";
  case Elf:
    return "Elf";
  case Orc:
    return "Orc";
  case Dwarf:
    return "Dwarf";
  case Troll:
    return "Troll";
  }
}
int Player::getHitPoints() const { return this->hitPoints; }
int Player::getMagicPoints() const { return this->magicPoints; }
void Player::setName(string name) { this->name = name; }
void Player::setRace(Race race) { this->race = race; }
void Player::setHitPoints(int hp) { this->hitPoints = hp; }
void Player::setMagicPoints(int mp) { this->magicPoints = mp; }
