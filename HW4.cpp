#include <iostream>
using namespace std;

template <typename T> class DynamicArray {
private:
  T *dynamArray;
  int size;

public:
  DynamicArray() : dynamArray(nullptr), size(0) {}

  int getSize() const { return size; }

  void addEntry(const T &entry) {
    T *newArray = new T[size + 1];
    for (int i = 0; i < size; ++i) {
      newArray[i] = dynamArray[i];
    }
    newArray[size] = entry;
    delete[] dynamArray;
    dynamArray = newArray;
    size++;
  }

  bool deleteEntry(const T &entry) {
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
    T *newArray = new T[size - 1];
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

  const T *getEntry(int index) const {
    if (index >= 0 && index < size) {
      return &dynamArray[index];
    }
    return nullptr;
  }

  DynamicArray(const DynamicArray &other) : size(other.size) {
    dynamArray = new T[size];
    for (int i = 0; i < size; ++i) {
      dynamArray[i] = other.dynamArray[i];
    }
  }

  DynamicArray &operator=(const DynamicArray &other) {
    if (this != &other) {
      delete[] dynamArray;
      size = other.size;
      dynamArray = new T[size];
      for (int i = 0; i < size; ++i) {
        dynamArray[i] = other.dynamArray[i];
      }
    }
    return *this;
  }

  ~DynamicArray() { delete[] dynamArray; }
};

int main() {
  DynamicArray<string> myArray;
  myArray.addEntry("Cap");
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

  DynamicArray<int> intArray;
  intArray.addEntry(10);
  intArray.addEntry(20);
  intArray.addEntry(30);

  for (int i = 0; i < intArray.getSize(); ++i) {
    const int *entry = intArray.getEntry(i);
    if (entry != nullptr) {
      cout << "Entry " << i << ": " << *entry << endl;
    }
  }

  int intDeleteItem = 20;
  if (intArray.deleteEntry(intDeleteItem)) {
    cout << "Deleted: " << intDeleteItem << endl;
  } else {
    cout << intDeleteItem << " not found in the array." << endl;
  }

  for (int i = 0; i < intArray.getSize(); ++i) {
    const int *entry = intArray.getEntry(i);
    if (entry != nullptr) {
      cout << "Updated Entry " << i << ": " << *entry << endl;
    }
  }

  return 0;
}
