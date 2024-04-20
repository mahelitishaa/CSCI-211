#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Dice {
public:
  Dice() {
    numSides = 6;
    srand(static_cast<unsigned int>(time(NULL)));
  }

  Dice(int numSides) {
    this->numSides = numSides;
    srand(static_cast<unsigned int>(time(NULL)));
  }

  virtual int rollDice() const { return (rand() % numSides) + 1; }

protected:
  int numSides;
};

class LoadedDice : public Dice {
public:
  LoadedDice() : Dice() {}
  LoadedDice(int numSides) : Dice(numSides) {}

  virtual int rollDice() const {
    int chance = rand() % 2;
    if (chance == 0)
      return numSides;
    else
      return Dice::rollDice();
  }
};

int rollTwoDice(const Dice &die1, const Dice &die2) {
  return die1.rollDice() + die2.rollDice();
}

int main() {
  LoadedDice one(6);
  LoadedDice two(6);
  double sum = 0;
  for (int i = 0; i < 1000; i++) {
    sum += rollTwoDice(one, two);
  }
  cout << "average value: " << sum / 1000;
  return 0;
}
