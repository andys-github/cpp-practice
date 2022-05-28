#include <iostream>
// #include <stdlib.h>

using std::cout;
using std::endl;

struct Rectangle
{
  int length;
  int breadth;
};

int main ()
{
  // Pointer to structure
  Rectangle r = { 2, 3 };
  Rectangle *p = &r;

  (*p).length = 4;
  cout << "Length of Rectangle r: " << r.length << endl;

  p->length = 5;
  cout << "[UPDATED] Length of Rectangle r: " << r.length << endl;

  // Create structure in HEAP
  // Rectangle *q = (Rectangle *)malloc(sizeof(Rectangle));
  // In C++, the above can be written as:
  Rectangle *q = new Rectangle; // No need to explicitly call malloc()
  q->length = 5;
  q->breadth = 4;

  cout << "Size of Rectangle q created in heap: " << sizeof(*q) << endl;

  return 0;
}
