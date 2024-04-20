#include <iostream>
#include <string>
using namespace std;
void swap(char *x, char *y) {// the parameters are char pointers
  char temp = *x;// have to do the same thing you do with a regular swap function
  *x = *y;
  *y = temp;
}
int main() {
  string input;
  cout << "Enter a word: ";
  cin >> input;
  //traverse the string simultaneously from both ends
  char *head = &input.front();// the first char of the input is the first parameter pointer   
  char *tail = &input.back();// the last char of the input is the second pointer parameter

  for (int i = 0; i < input.size() / 2; i++) {// divide the size by two since we swap from the front and back to get to the middle. Only need to iterate half the length of the string. 
    swap(head, tail);
    head++;// increment to the next character of the string
    tail--;// decrease to get the previous character of the string b/c of the .back()
  }
  cout << input << endl;
  return 0;
}