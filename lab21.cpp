#include <iostream>
using namespace std;

class Vehicle {
protected:
  string manufacturer;
  int cylinders;
  string owner;

public:
  Vehicle() {
    manufacturer = "";
    cylinders = 0;
    owner = "";
  }

  Vehicle(const string &man, int cyl, const string &own) {
    manufacturer = man;
    cylinders = cyl;
    owner = own;
  }

  string getManufacturer() const { return manufacturer; }
  int getCylinders() const { return cylinders; }
  string getOwner() const { return owner; }

  void operator=(const Vehicle &other) {
    manufacturer = other.manufacturer;
    cylinders = other.cylinders;
    owner = other.owner;
  }

  Vehicle(const Vehicle &other) {
    manufacturer = other.manufacturer;
    cylinders = other.cylinders;
    owner = other.owner;
  }
};

class Truck : public Vehicle {
private:
  double loadCapacity;
  int towingCapacity;

public:
  Truck() {
    loadCapacity = 0.0;
    towingCapacity = 0;
  }

  Truck(const string &man, int cyl, const string &own, double loadCap,
        int towCap)
      : Vehicle(man, cyl, own) {
    loadCapacity = loadCap;
    towingCapacity = towCap;
  }

  double getLoadCapacity() const { return loadCapacity; }
  int getTowingCapacity() const { return towingCapacity; }

  void operator=(const Truck &other) {
    Vehicle::operator=(other);
    loadCapacity = other.loadCapacity;
    towingCapacity = other.towingCapacity;
  }

  Truck(const Truck &other) : Vehicle(other) {
    loadCapacity = other.loadCapacity;
    towingCapacity = other.towingCapacity;
  }
};

int main() {
  Vehicle vehicle1("Toyota", 4, "John Doe");
  Truck truck1("Ford", 6, "Jane Smith", 5.5, 10000);

  cout << "Vehicle 1 " << endl
       << "Manufacturer: " << vehicle1.getManufacturer() << endl
       << "Cylinders: " << vehicle1.getCylinders() << endl
       << "Owner: " << vehicle1.getOwner() << endl;
  cout << endl;

  cout << "Truck 1" << endl
       << "Manufacturer: " << truck1.getManufacturer() << endl
       << "Cylinders: " << truck1.getCylinders() << endl
       << "Owner: " << truck1.getOwner() << endl
       << "Load Capacity: " << truck1.getLoadCapacity() << " tons " << endl
       << "Towing Capacity: " << truck1.getTowingCapacity() << " pounds"
       << endl;
  cout << endl;

  Vehicle vehicle2 = vehicle1;
  Truck truck2 = truck1;

  cout << "Vehicle 2 " << endl
       << "Manufacturer: " << vehicle2.getManufacturer() << endl
       << "Cylinders: " << vehicle2.getCylinders() << endl
       << "Owner: " << vehicle2.getOwner() << endl;
  cout << endl;
  cout << "Truck 2" << endl
       << "Manufacturer: " << truck2.getManufacturer() << endl
       << "Cylinders: " << truck2.getCylinders() << endl
       << "Owner: " << truck2.getOwner() << endl
       << "Load Capacity: " << truck2.getLoadCapacity() << " tons" << endl
       << "Towing Capacity: " << truck2.getTowingCapacity() << " pounds"
       << endl;

  return 0;
}
