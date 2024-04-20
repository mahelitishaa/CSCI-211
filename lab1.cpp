#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  int x;
  cout<< "Enter a seed for the random num generator: ";
  cin>> x;
  srand(x);
  for (int i =0; i<10; ++i){
    cout<<(double) rand()/RAND_MAX<<endl;  //RAND MAX is just a big number that you divide the random seed numbers by to get the decimals numbers between 0 to 1.0//
  }
  return 0;
}