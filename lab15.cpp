#include <iostream>
using namespace std;
class Money {
private:
  int dollars, cents;

public:
  Money() {
    dollars = 0;
    cents = 0;
  }
  Money(int d, int c) {
    dollars = d;
    cents = c;
  }
  void set(int userDoll, int userCent) {
    dollars = userDoll + userCent / 100;
    cents = userCent % 100;
  }
  int getDollars() { return dollars; }
  int getCents() { return cents; }
  double convert() const { return dollars + (cents / 100.0); }

  bool operator<(const Money &secondOperand) const {
    return (convert() < secondOperand.convert());
  }

  bool operator<=(const Money &secondOperand) const {
    return (convert() <= secondOperand.convert());
  }

  bool operator>(const Money &secondOperand) const {
    return (convert() > secondOperand.convert());
  }

  bool operator>=(const Money &secondOperand) const {
    return (convert() >= secondOperand.convert());
  }
  bool operator==(const Money &secondOperand) const {
    return (convert() == secondOperand.convert());
  }
};

int main() {
  Money a, b;
  a.set(900, 10);
  b.set(1000, 16);

  cout << "The dollars for a is " << a.getDollars() << ", the cents for a is "
       << a.getCents() << " and the total amount is " << a.convert() << endl;

  cout << "The dollars for b is " << b.getDollars() << ", the cents for b is "
       << b.getCents() << " and the total amount is " << b.convert() << endl;

  if (a >= b) {
    cout << "a is greater than or equal to b" << endl;
  } else {
    cout << "b is greater than a" << endl;
  }
  if (a > b) {
    cout << "a is greater than b" << endl;
  } else {
    cout << "b is greater than or equal to a" << endl;
  }
  if (a <= b) {
    cout << "a is less than or equal to b" << endl;
  } else {
    cout << "b is less than a" << endl;
  }
  if (a < b) {
    cout << "a is less than b" << endl;
  } else {
    cout << "b is less than or equal to a" << endl;
  }
  if (a == b) {
    cout << "a and b are equla" << endl;
  } else {
    cout << "a and b are not equal " << endl;
  }
  return 0;
}
