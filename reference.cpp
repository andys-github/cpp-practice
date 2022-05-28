#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 10;
    /******************************************************************
     * Referencing is assigning an alias to an existing variable.
     * Useful in parameter passing without using pointers.
     * This feature is available only in C++ and not in C.
     *
     * Reference variable must begin with "&".
     * And it must be initialized during declaration itself.
     ******************************************************************/
    int &r = a;

    cout << r++ << endl;
    cout << a << endl;

    return 0;
}
