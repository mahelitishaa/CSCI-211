#include <iostream>
using namespace std;
int main() {
  
  for (int i = 6; i < 30; ++i) {
    if (i % 2 == 0 && i % 5 == 0 && i % 3 == 0) {
      cout << i << " is divisible by 2, 3, and 5" << endl;
    } 
    else if (i % 3 == 0 && i % 2 == 0) {
      cout << i << " is divisible by 2 and 3" << endl;
    } 
    else if (i % 2 == 0) {
      cout << i << " is divisible by 2" << endl;
    }
  }
  
  return 0;
}