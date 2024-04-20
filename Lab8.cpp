#include <iostream>
using namespace std;
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main() {
  int x = 9, y = 1;
  int *p1 = &x, *p2 = &y;
  swap(p1, p2);
  cout << *p1 << " " << *p2 << endl;
  return 0;
}
