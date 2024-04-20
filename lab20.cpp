#include <iostream>
using namespace std;

class MyInteger {
  int value;

public:
  MyInteger(int val) { value = val; }

  const int operator[](int index) const {
    int n = value;
    for (int i = 0; i < index; ++i) {
      n /= 10;
    }
    if (n == 0 && index > 0) {
      return -1;
    }
    return n % 10;
  }

  friend MyInteger operator+(const MyInteger &a, const MyInteger &b);
  friend MyInteger operator-(const MyInteger &a, const MyInteger &b);
};

MyInteger operator+(const MyInteger &a, const MyInteger &b) {
  return MyInteger(a.value + b.value);
}

MyInteger operator-(const MyInteger &a, const MyInteger &b) {
  return MyInteger(a.value - b.value);
}

int main() {
  MyInteger num1(12345);
  cout << "Digits: ";
  for (int i = 0; i < 10; ++i) {
    cout << num1[i] << " ";
  }
  cout << endl;

  MyInteger num2(6789);
  MyInteger sum = num1 + num2;
  cout << "Sum: " << sum[0] << endl;

  MyInteger diff = num1 - num2;
  cout << "Difference: " << diff[0] << endl;
  return 0;
}
