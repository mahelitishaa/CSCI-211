#include <iostream>
#include <fstream>
using namespace std;

void sendLine(ostream &targetStream) {
  char next;
  do {
    cin.get(next);
    targetStream << next;
  } while (next != '\n');
}
int main() {
  ifstream fin("stuff.txt"); 
  if (!fin.is_open()) {
    cerr << "Error opening input file." << endl;
    return 0;
  }
  ofstream fout("stuff_copy.txt"); 
  if (!fout.is_open()) {
    cerr << "Error opening output file." << endl;
    fin.close(); 
    return 0;
  }
  while (!fin.eof()) {
    sendLine(fout); 
  }
  fin.close();
  fout.close();
  cout << "Lines copied from 'stuff.txt' to 'stuff_copy.txt'" << endl;
  return 0;
}
