#include <iostream>
using namespace std;

int max(int n01, int n02)
{
  return n01 >= n02 ? n01 : n02;
}

int main()
{
  int a, b, c;
  cout << "TYPE THE FIRST NUMBER: ";
  cin >> a;
  cout << "TYPE THE SECOND NUMBER: ";
  cin >> b;
  cout << "TYPE THE THIRD NUMBER: ";
  cin >> c;

  cout << "MAX: " << max(a, max(b, c));

  return 0;
}
