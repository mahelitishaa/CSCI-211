#include <iostream>
using namespace std;
int main() {
  //iterate less than 100 going up 2 to be odd 
  for (int i = 3; i <= 99; i += 2) {// 3 is the smallest number we know that is odd and prime 
    bool b = true;
    for (int j = 3; j * j <= i; j += 2) {
      if ((i % j) == 0) {
        b = false;
        break;
      }
    }
    cout<< i<< " is prime"<<endl;
  }
  return 0;
}