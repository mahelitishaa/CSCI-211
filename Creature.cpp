#include "Creature.h"

Creature::Creature() : strength(10), hitpoints(10) {}

Creature::Creature(int newStrength, int newHit)
    : strength(newStrength), hitpoints(newHit) {}

int Creature::getStrength() const { return strength; }

int Creature::getHitpoints() const { return hitpoints; }

void Creature::setHitpoints(int newHit) { hitpoints = newHit; }
