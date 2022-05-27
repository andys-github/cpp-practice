#include <iostream>

using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

int main() {
  cout << "Pointers:" << endl;

  int *p1;
  float *p2;
  char *p3;
  Rectangle *p4;

  cout << "Size of integer pointer: " << sizeof(p1) << endl;
  cout << "Size of float pointer:   " << sizeof(p2) << endl;
  cout << "Size of char pointer:    " << sizeof(p3) << endl;
  cout << "Size of struct pointer:  " << sizeof(p4) << endl;

  return 0;
}
