#include <iostream>
using namespace std;

template <typename T> class Set {
private:
  T *items;
  int size;
  int capacity;

public:
  Set() : items(nullptr), size(0), capacity(0) {}

  Set(const T arr[], int arrSize) : items(nullptr), size(0), capacity(0) {
    for (int i = 0; i < arrSize; ++i) {
      if (!contains(arr[i])) {
        add(arr[i]);
      }
    }
  }

  ~Set() { delete[] items; }

  void add(const T &item) {
    if (!contains(item)) {
      if (size >= capacity) {
        int newCapacity = capacity == 0 ? 1 : capacity * 2;
        T *temp = new T[newCapacity];

        if (items != nullptr) {
          for (int i = 0; i < size; ++i) {
            temp[i] = items[i];
          }
          delete[] items;
        }

        items = temp;
        capacity = newCapacity;
      }
      items[size++] = item;
    }
  }

  int getSize() const { return size; }

  T *getItems() const {
    T *temp = new T[size];
    for (int i = 0; i < size; ++i) {
      temp[i] = items[i];
    }
    return temp;
  }

private:
  bool contains(const T &item) const {
    for (int i = 0; i < size; ++i) {
      if (items[i] == item) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  int intArr[] = {1, 2, 3, 2, 4, 5, 3};
  Set<int> intSet(intArr, 7);

  intSet.add(6);
  intSet.add(2);

  cout << "Number of items in integer set: " << intSet.getSize() << endl;

  int *intItems = intSet.getItems();
  cout << "Items in integer set: ";
  for (int i = 0; i < intSet.getSize(); ++i) {
    cout << intItems[i] << " ";
  }
  cout << endl;

  delete[] intItems;

  string strArr[] = {"apple", "banana", "orange", "banana"};
  Set<string> strSet(strArr, 4);

  strSet.add("grape");
  strSet.add("banana");

  cout << "\nNumber of items in string set: " << strSet.getSize() << endl;

  string *strItems = strSet.getItems();
  cout << "Items in string set: ";
  for (int i = 0; i < strSet.getSize(); ++i) {
    cout << strItems[i] << " ";
  }
  cout << endl;

  delete[] strItems;

  return 0;
}
