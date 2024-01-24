#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  double pi = 3.14;
  double &piRef = pi;

  cout << piRef << endl;
  cout << &pi << endl;

  // * -> dereference operator
  // think of as "Get value at this reference"

  cout << *&pi << endl;
  cout << *&piRef << endl;

  return 0;
}
