#include <iostream>
using namespace std;

class BankAccount {
private:
  int accountDollar;
  int accountCent;
  double rate;

public:
  // Extracts the dollars and cents from the balance 
  BankAccount(double balance, double rate) {
    accountDollar = static_cast<int>(balance);
    accountCent = static_cast<int>((balance - accountDollar) * 100);
    this->rate = rate;
  }
  // Takes in dollars and cents as ints
  BankAccount(int dollar, int cents, double rate) {
    accountDollar = dollar;
    accountCent = cents;
    this->rate = rate;
  }
  // Whole dollar amounts
  BankAccount(int dollar, double rate) {
    accountDollar = dollar;
    accountCent = 0;
    this->rate = rate;
  }
  // Default constructor
  BankAccount() {
    accountDollar = 0;
    accountCent = 0;
    rate = 0.0;
  }
  // Getters
  int getDollars(){return accountDollar;}
  int getCents(){return accountCent;}
  double getRate(){return rate;}
};

int main() {
  BankAccount a(123.45, 0.05);
  BankAccount b(50, 75, 0.03);
  BankAccount c(100, 0.02);
  BankAccount d; // Default constructor

  cout << "Account A has $" << a.getDollars() << "." << a.getCents() << ", and the rate is " << a.getRate() << endl;
  cout << "Account B has $" << b.getDollars() << "." << b.getCents() << ", and the rate is " << b.getRate() << endl;
  cout << "Account C has $" << c.getDollars() << "." << c.getCents() << ", and the rate is " << c.getRate() << endl;
  cout << "Account D has $" << d.getDollars() << "." << d.getCents() << ", and the rate is " << d.getRate() << endl;
  return 0;
}
