#include <iostream>
#include <string>
using namespace std;
class Number {
private:
  int int_ex;
  double doub_ex;

public:
  Number(int i) {
    int_ex = i;
    doub_ex = 0;
  }
  Number(double d) {
    int_ex = 0;
    doub_ex = d;
  }
  void reverseInt(int value) {
    if (value < 10) {
      cout << value;
      return;
    }
    cout << value % 10;
    reverseInt(value / 10);
  }
  void reverseDouble(double value) {
    // Convert the double to a string for reversing
    string str = to_string(value);
    for (int i = str.length() - 1; i >= 0; i--) {
      cout << str[i];
    }
  }
  void reverse() {
    if (int_ex != 0) {
      reverseInt(int_ex);
    } else {
      reverseDouble(doub_ex);
    }
  }
};
int main() { 
  Number n1(567);
  Number n2(123.4);
  cout << "Reversed Integer n1: ";
  n1.reverse();
  cout << endl;
  cout << "Reversed Double n2: ";
  n2.reverse();
  cout << endl;
  return 0; 
}