#ifndef CREATURE_H
#define CREATURE_H

#include <cstdlib>
#include <iostream>

class Creature {
protected:
  int strength;
  int hitpoints;

public:
  Creature();
  Creature(int newStrength, int newHit);
  int getStrength() const;
  int getHitpoints() const;
  void setHitpoints(int newHit);
  virtual int getDamage() const = 0;
  virtual std::string getSpecies() const = 0;
};

#endif
