#include <iostream>
#include <string>
using namespace std;

class DynamicStringArray {
private:
  string *dynamArray;
  int size;

public:
  DynamicStringArray() {
    dynamArray = NULL;
    size = 0;
  }

  int getSize() { return size; }

  void addEntry(const string &entry) {
    string *newArray = new string[size + 1];
    for (int i = 0; i < size; ++i) {
      newArray[i] = dynamArray[i];
    }
    newArray[size] = entry;
    delete[] dynamArray;
    dynamArray = newArray;
    size++;
  }

  bool deleteEntry(const string &entry) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
      if (dynamArray[i] == entry) {
        index = i;
        break;
      }
    }
    if (index == -1) {
      return false;
    }
    string *newArray = new string[size - 1];
    int j = 0;
    for (int i = 0; i < size; ++i) {
      if (i != index) {
        newArray[j] = dynamArray[i];
        j++;
      }
    }
    delete[] dynamArray;
    dynamArray = newArray;
    size--;
    return true;
  }

  const string *getEntry(int index) const {
    if (index >= 0 && index < size) {
      return &dynamArray[index];
    }
    return nullptr;
  }

  // Copy Constructor
  DynamicStringArray(const DynamicStringArray &other) : size(other.size) {
    dynamArray = new string[size];
    for (int i = 0; i < size; ++i) {
      dynamArray[i] = other.dynamArray[i];
    }
  }

  // Overloading Assignment Operator
  DynamicStringArray &operator=(const DynamicStringArray &other) {
    if (this != &other) {
      delete[] dynamArray;
      size = other.size;
      dynamArray = new string[size];
      for (int i = 0; i < size; ++i) {
        dynamArray[i] = other.dynamArray[i];
      }
    }
    return *this;
  }

  ~DynamicStringArray() { delete[] dynamArray; }
};

int main() {
  DynamicStringArray myArray;
  myArray.addEntry("Cat");
  myArray.addEntry("Bat");
  myArray.addEntry("Sat");
  for (int i = 0; i < myArray.getSize(); ++i) {
    const string *entry = myArray.getEntry(i);
    if (entry != nullptr) {
      cout << "Entry " << i << ": " << *entry << endl;
    }
  }
  string deleteItem = "Bat";
  if (myArray.deleteEntry(deleteItem)) {
    cout << "Deleted: " << deleteItem << endl;
  } else {
    cout << deleteItem << " not found in the array." << endl;
  }
  for (int i = 0; i < myArray.getSize(); ++i) {
    const string *entry = myArray.getEntry(i);
    if (entry != nullptr) {
      cout << "Updated Entry " << i << ": " << *entry << endl;
    }
  }
  return 0;
}
