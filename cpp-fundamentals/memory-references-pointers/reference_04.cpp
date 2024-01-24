#include <iostream>
using namespace std;

int &getReference(int &num)
{
  return num;
}

int main(int argc, char const *argv[])
{
  int x = 42;

  getReference(x) = 100;

  cout << "The value after function: " << x << endl;

  return 0;
}
