#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 10;
  cout << a << "\t" << &a << endl;

  string name = "John";
  cout << name << "\t" << &name << endl;

  return 0;
}
