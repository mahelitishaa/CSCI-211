#include <iostream>
#include <string>
using namespace std;
class Student {
private:
  string name;
  int numClasses;
  string *classList;

public:
  // Default constructor
  Student() {
    name = "";
    numClasses = 0;
    classList = nullptr;
  }
  // Non-Default constructor
  Student(const string &studentName, int num) {
    name = studentName;
    numClasses = num;
    classList = new string[num];
    for (int i = 0; i < num; i++) {
      classList[i] = "";
    }
  }
  // Copy constructor
  Student(const Student &other) {
    name = other.name;
    numClasses = other.numClasses;
    classList = new string[numClasses];
    for (int i = 0; i < numClasses; i++) {
      classList[i] = other.classList[i];
    }
  }
  // Mutators
  void setName(const string &studentName) { name = studentName; }
  void setNumClasses(int num) {
    numClasses = num;
    delete[] classList;
    classList = new string[num];
    for (int i = 0; i < num; i++) {
      classList[i] = "";
    }
  }

  void addElement(const string &className, int index) {
    if (index >= 0 && index < numClasses) {
      classList[index] = className;
    }
  }

  // Accessors
  string getName() { return name; }

  int getNumClasses() { return numClasses; }

  string getClassList(int index) {
    if (index >= 0 && index < numClasses) {
      return classList[index];
    }
    return "";
  }

  // Destructor
  ~Student() { delete[] classList; }
};

int main() {
  Student student1;
  student1.setName("Maheli");
  student1.setNumClasses(3);
  student1.addElement("Math", 0);
  student1.addElement("English", 1);
  student1.addElement("Art", 2);

  Student student2 = student1; // Copy

  cout << "Student 1: " << student1.getName() << " is enrolled in "
       << student1.getNumClasses() << " classes." << endl;
  for (int i = 0; i < student1.getNumClasses(); i++) {
    cout << "Class: " << student1.getClassList(i) << endl;
  }
  cout << "Student 2: " << student2.getName() << " is enrolled in "
       << student2.getNumClasses() << " classes." << endl;
  for (int i = 0; i < student2.getNumClasses(); i++) {
    cout << "Class: " << student2.getClassList(i) << endl;
  }
  return 0;
}
