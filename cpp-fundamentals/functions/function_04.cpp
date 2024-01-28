#include <iostream>
using namespace std;

void incRef(int& value)
{
  value++;
  value++;
}

int main()
{
  int x = 10;
  incRef(x);

  cout << x << endl;

  return 0;
}
