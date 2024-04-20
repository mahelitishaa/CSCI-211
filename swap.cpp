#include "swap.h"
using namespace std;
void swap(int &a, int &b) {
  a = b;
  b = a;
}
void swap(double &a, double &b) {
  a = b;
  b = a;
}
void swap(char &a, char &b) {
  a = b;
  b = a;
}
void swap(string &a, string &b) {
  a = b;
  b = a;
}
