#include <iostream>
using namespace std;
class Account {
private:
  double balance;

public:
  Account() { balance = 0.0; }
  Account(double initialBalance) { balance = initialBalance; }

  void setBalance(double newBalance) { balance = newBalance; }
  double getBalance() const { return balance; }

  virtual string type() const { return "Account"; }
};

class CheckingAccount : public Account {
public:
  CheckingAccount() : Account() {}
  CheckingAccount(double initialBalance) : Account(initialBalance) {}

  virtual string type() const override { return "Checking Account"; }
};

class SavingsAccount : public Account {
public:
  SavingsAccount() : Account() {}
  SavingsAccount(double initialBalance) : Account(initialBalance) {}

  virtual string type() const override { return "Savings Account"; }
};

void print_account_type(const Account &acct) { cout << acct.type() << endl; }

int main() {
  Account acct(1000.0);
  CheckingAccount checking(1000.0);
  SavingsAccount saving(1000.0);

  print_account_type(acct);
  print_account_type(checking);
  print_account_type(saving);

  return 0;
}
