
#include <iostream>

using namespace std;

template <class T> T bigger(T first, T second);
int main() {
  cout << bigger(1, 10) << endl;
  cout << bigger("john", "emma") << endl;
  cout << bigger(1.1, 0.9) << endl;

  return 0;
}

template <class T> T bigger(T first, T second) {
  if (first > second) {
    return first;
  } else
    return second;
}
