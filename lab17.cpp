#include "pfarrayd.h"
#include <iostream>
using namespace lab17;

void testPFArrayD();

int main() {
  std::cout << "This program tests the class PFArrayD.\n";

  char ans;
  do {
    testPFArrayD();
    std::cout << "Test again? (y/n) ";
    std::cin >> ans;
  } while ((ans == 'y') || (ans == 'Y'));

  return 0;
}

void testPFArrayD() {
  int cap;
  std::cout << "Enter capacity of this super array: ";
  std::cin >> cap;
  PFArrayD temp(cap);

  std::cout << "Enter up to " << cap << " nonnegative numbers.\n";
  std::cout << "Place a negative number at the end.\n";

  double next;
  std::cin >> next;
  while ((next >= 0) && (!temp.full())) {
    temp.addElement(next);
    std::cin >> next;
  }

  std::cout << "You entered the following " << temp.getNumberUsed() << " numbers:\n";
  int index;
  int count = temp.getNumberUsed();
  for (index = 0; index < count; index++)
    std::cout << temp[index] << " ";
  std::cout << std::endl;
  std::cout << "(plus a sentinel value.)\n";
}
