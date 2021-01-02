#include "Mage.h"
#include "Player.h"
#include "Priest.h"
#include "Worrier.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void showMenu();
void showRace();
Player *createPlayer(string name, int typeNum, int raceNum);
Race getRace(int raceNum);
void doCleanup(vector<Player *> playerList);
void printAll(vector<Player *> playerList);

int main() {
  int typeNum, raceNum;
  string name;
  vector<Player *> playerList;
  showMenu();
  cin >> typeNum;

  while (typeNum != 0) {
    showRace();
    cin >> raceNum;
    cout << "Name your charactor" << endl;
    cin >> name;
    Player *player = createPlayer(name, typeNum, raceNum);
    playerList.push_back(player);
    showMenu();
    cin >> typeNum;
  };
  printAll(playerList);
  doCleanup(playerList);
  return 0;
}
void showRace() {
  cout << "What race would you like?" << endl;
  cout << "\t1 - Human" << endl;
  cout << "\t2 - Orc" << endl;
  cout << "\t3 - Troll" << endl;
  cout << "\t4 - Dwarf" << endl;
  cout << "\t5 - Elf" << endl;
}
void showMenu() {
  cout << "What charactor would you like?" << endl;
  cout << "\t1 - Create a Warrior" << endl;
  cout << "\t2 - Create a Priest" << endl;
  cout << "\t3 - Create a Mage" << endl;
  cout << "\t0 - finish creating player charact" << endl;
}

Race getRace(int raceNum) {
  Race race;
  switch (raceNum) {
  case 1:
    race = Human;
    break;
  case 2:
    race = Orc;
    break;
  case 3:
    race = Troll;
    break;
  case 4:
    race = Dwarf;
    break;
  case 5:
    race = Elf;
    break;
  }
  return race;
}

Player *createPlayer(string name, int typeNum, int raceNum) {
  Player *player;
  Race race = getRace(raceNum);
  switch (typeNum) {
  case 1:
    player = new Worrier(name, race);
    break;
  case 2:
    player = new Priest(name, race);
    break;
  case 3:
    player = new Mage(name, race);
    break;
  }
  return player;
}
void doCleanup(vector<Player *> playerList) {
  for (Player *player : playerList) {
    delete player;
  }
  playerList.clear();
}
void printAll(vector<Player *> playerList) {
  for (Player *player : playerList) {
    cout << player->getName() << endl;
    cout << player->getRace() << endl;
    cout << player->whatRace() << endl;
    cout << player->attack() << endl;
  }
}
