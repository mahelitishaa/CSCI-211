#ifndef PFARRAYD_H
#define PFARRAYD_H

namespace lab17 {
class PFArrayD {
public:
  PFArrayD();
  PFArrayD(int capacityValue);
  PFArrayD(const PFArrayD &pfaObject);
  void addElement(double element);
  bool full() const;
  int getCapacity() const;
  int getNumberUsed() const;
  void emptyArray();
  double &operator[](int index);
  PFArrayD &operator=(const PFArrayD &rightSide);
  ~PFArrayD();

private:
  double *a;
  int capacity;
  int used;
};
} // namespace lab17

#endif // PFARRAYD_H
