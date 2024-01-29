#include <iostream>
using namespace std;

auto add = [] (int x, int y) -> int { return x + y; };
auto sub = [] (int x, int y) -> int { return x - y; };
auto multi = [] (int x, int y) -> int { return x * y; };

int main()
{
  cout << add(10, 20) << endl;
  cout << sub(20, 10) << endl;
  cout << multi(10, 20) << endl;
  return 0;
}
