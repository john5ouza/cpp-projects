/*
  Pointer is: a variable whose value os
  the address of another variable, i.e.,
  direct address of the memory location.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  double pi = 3.14;
  double &refPi = pi;
  double* pointer = &pi;

  cout << pi << "\t" << refPi << "\t" << *pointer << endl;
  cout << &pi << "\t" << &refPi << "\t" << pointer << endl;

  return 0;
}
