#define ZERO 0
#define SQUARE(X) (X) * (X)

#include <iostream>

using namespace std;

int main()
{
  #ifdef SQUARE
    cout << SQUARE(10) << endl;
    cout << SQUARE(1 + 2) << endl;
  #else
    cout << "ELSE..." << endl;
  #endif

  #if DEBUG == 1
    cout << "END..." << endl;
  #endif

  return ZERO;
}
