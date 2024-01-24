#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int* p01;
  int* p02 = nullptr;

  int x = 5;
  int y = 10;

  p01 = &x;
  cout << p01 << "\t" << *p01 << endl;

  p01 = &y;
  cout << p01 << "\t" << *p01 << endl;

  return 0;
}
