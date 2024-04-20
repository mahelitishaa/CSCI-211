#include "Human.h"
using namespace std;
Human::Human() : Creature() {}

Human::Human(int newStrength, int newHit) : Creature(newStrength, newHit) {}

int Human::getDamage() const {
  int damage = (rand() % strength) + 1;
  cout << getSpecies() << " attacks for " << damage << " points!" << endl;
  return damage;
}

string Human::getSpecies() const { return "Human"; }
