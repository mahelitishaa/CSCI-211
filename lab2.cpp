#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  char letterbox[10];
  cout<< "Enter ten letters. If using less than ten, end with the period character! ";
  for (int i=0; i<10;i++){
    cin>> letterbox[i];
    if (letterbox[i]=='.') break;
  }
  for (int i=10; i>=0;i--){
    if(letterbox[i]>='a'&&letterbox[i]<='z')
      cout<< letterbox[i];
  }
  return 0;

}