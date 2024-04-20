#include "Human.h" // Include other necessary headers like Elf.h, Demon.h, Balrog.h, Cyberdemon.h
#include <ctime>
#include <iostream>

int main() {
  // strength, hitpoints
  Human hero(30, 150);
  Elf legolas(50, 500);
  Balrog gobo(10, 200);
  Cyberdemon boss(60, 700);

  int rounds;
  int damage;
  cout << "how many rounds?";
  cin >> rounds

      for (int i = 0; i < rounds; i++) {
    damage = hero.getDamage();
    cout << "hero attacks gobo the Balrog with " << damage << " damage";
    cout << "gobo's health is "
         << gobo.setHitpoints(gobo.getHitpoints() - damage);

    damage = legolas.getDamage();
    cout << "legolas attacks the cyberdmon boss with " << damage << " damage";
    cout << "boss's health is "
         << boss.setHitpoints(boss.getHitpoints() - damage);

    damage = gobo.getDamage();

    cout << "gobo fights back and hits legolas with " << damage << " damage";
    cout << "legolas's health is "
         << legolas.setHitpoints(legolas.getHitpoints() - damage);

    damage = boss.getDamage();
    cout << "oh no! the cyberdemon hits both the hero and legolas with  "
         << damage << " damage!";
    cout << "legolas's health is "
         << legolas.setHitpoints(legolas.getHitpoints() - damage);
    cout << "hero's health is "
         << hero.setHitpoints(hero.getHitpoints() - damage);
  }

  return 0;
}