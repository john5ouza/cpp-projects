#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int x = 10;
  int &xRef = x;

  cout << x << "\t" << &x << endl;
  cout << xRef << "\t" << &xRef << endl;

  xRef++;
  cout << x << endl;

  x--;
  cout << xRef << "\t" << &x << endl;

  return 0;
}
