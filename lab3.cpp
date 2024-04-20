#include <iostream>
using namespace std;
double convertToMPH(int min, int sec){
  double timeMins= min + sec/60;
  return 60 / timeMins;
}
double convertToMPH(double kph){
  return kph/1.61;
}
int main() {
  int min, sec;
  int k;
  cout<< "How many minutes and seconds did you run: ";
  cin>>min>>sec;
  cout<< "How many kilometers: ";
  cin>>k;
  double mph= convertToMPH(min,sec);
  cout<< "Your pace in MPH is "<<mph<<endl;
  double kph=convertToMPH(k);
  cout<< "The numbers of kilometers to miles is about "<<kph<<endl;
  return 0;
}
  
//overloaded functions are when you have the same function and want to account for different input types.