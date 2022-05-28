#include <iostream>
#include <stdlib.h>

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
  cout << r.length << endl;

  p->length = 5;
  cout << r.length << endl;

  // Create structure in HEAP
  Rectangle *q = (Rectangle *)malloc(sizeof(Rectangle));
  q->length = 5;
  q->breadth = 4;

  cout << sizeof(*q) << endl;

  return 0;
}
