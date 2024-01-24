#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int number = 93;
  int* pointer = &number;

  cout << "Reference: " << &number << endl;
  cout << "Pointer: " << *pointer << endl;
  cout << "Dereference: " << *&number << endl;

  int &refNumber = *pointer;

  refNumber = 99;

  cout << "Altered value: " << number << endl;
  cout << "Pointer: " << *pointer << endl;
  cout << "Dereference: " << *&number << endl;

  return 0;
}
