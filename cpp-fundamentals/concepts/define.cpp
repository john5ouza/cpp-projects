#define ZERO 0
#define SQUARE(X) (X) * (X)
#include <iostream>

using namespace std;

int main()
{
  cout << SQUARE(10) << endl;
  cout << SQUARE(1 + 2) << endl;
  return ZERO;
}
