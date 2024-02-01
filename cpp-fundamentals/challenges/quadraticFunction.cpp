/*

CHALLENGE 01
Given the function f(x) = x^2 - 3x + 5

Create an algorithm in C++ that has a function
which calculates the value of f(a), where a is a number
actual information provided by the user.

*/

#include <iostream>
using namespace std;

double quadraticFunction(double x) {
  return x * x -3 * x + 5;
}

int main() {
  cout << "F(2) IS: " << quadraticFunction(2) << endl;

  return 0;
}
