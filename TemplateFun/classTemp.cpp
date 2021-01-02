#include <iostream>

using namespace std;
template <class T> class Swapper {
public:
  Swapper(T first, T second);
  void swap();
  T showFirst();
  T showSecond();

private:
  T first;
  T second;
};

template <class T> Swapper<T>::Swapper(T first, T second) {
  this->first = first;
  this->second = second;
};
template <class T> void Swapper<T>::swap() {
  T temp = first;
  first = second;
  second = temp;
};
template <class T> T Swapper<T>::showFirst() { return this->first; };
template <class T> T Swapper<T>::showSecond() { return this->second; };

int main() {

  // Swapper<int> swapperInt = Swapper<int>(2, 5);
  Swapper<int> swapperInt(2, 5);
  cout << swapperInt.showFirst() << endl;
  cout << swapperInt.showSecond() << endl;

  swapperInt.swap();
  cout << swapperInt.showFirst() << endl;
  cout << swapperInt.showSecond() << endl;

  return 0;
}
