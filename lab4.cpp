#include "swap.h"
#include <iostream>
using namespace std;
int main() {
  int num1 = 5, num2 = 10;
  cout << "Before swapping: numb1 = " << num1 << ", num 2 = " << num2 << endl;
  swap(num1, num2);
  cout << "After swapping: num 1 = " << num1 << ", num 2 = " << num2 << endl;
  
  double double1 = 3.14, double2 = 2.71;
  cout << "Before swapping: double 1 = " << double1
       << ", double 2 = " << double2 << endl;
  swap(double1, double2);
  cout << "After swapping: double 1 = " << double1 << ", double 2 = " << double2
       << endl;
  
  char char1 = 'A', char2 = 'B';
  cout << "Before swapping: char 1 = " << char1 << ", char 2 = " << char2
       << endl;
  swap(char1, char2);
  cout << "After swapping: char 1 = " << char1 << ", char 2 = " << char2
       << endl;
  
  string str1 = "Hello", str2 = "World";
  cout << "Before swapping: str 1 = " << str1 << ", str 2 = " << str2 << endl;
  swap(str1, str2);
  cout << "After swapping: str 1 = " << str1 << ", str 2 = " << str2 << endl;
  
  return 0;
}
