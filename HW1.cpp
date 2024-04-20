#include <fstream>
#include <iostream>
#include <stack>
using namespace std;
bool balance(string expr) {
  stack<char> temp;
  for (int i = 0; i < expr.length(); i++) {
    if (temp.empty()) {
      temp.push(expr[i]);
    } else if ((temp.top() == '(' && expr[i] == ')') ||
               (temp.top() == '{' && expr[i] == '}') ||
               (temp.top() == '[' && expr[i] == ']')) {
      // Check for every complete pair
      temp.pop();
    } else {
      temp.push(expr[i]);
    }
  }
  if (temp.empty()) {
    return true;
  }
  return false;
}

int main() {
  ifstream inFile("expressions.txt"); // File with the expressions
  ofstream outFile("result.txt");     // Output file storing results

  if (!inFile) {
    cout << "Error opening input file." << endl;
    return 0;
  }
  if (!outFile) {
    cout << "Error opening output file." << endl;
    inFile.close();
    return 0;
  }

  string expression;
  while (getline(inFile, expression)) {
    if (balance(expression)) {
      outFile << "true" << endl; // Write "true" to the output file
      cout << "Expression: " << expression << " is "
           << "balanced" << endl;
    } else {
      outFile << "false" << endl; // Write "false" to the output file
      cout << "Expression: " << expression << " is "
           << "not balanced" << endl;
    }
  }
  inFile.close();
  outFile.close();

  cout << "Results of if the expression is balanced are stored in result.txt."
       << endl;

  return 0;
}
