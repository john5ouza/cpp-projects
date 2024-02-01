/*

CHALLENGE 03

Create an algorithm in C++ that has a function
which calculates the factorial of a positive integer,
informed by the user.

*/

#include <iostream>
using namespace std;

unsigned long long int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main()
{
  
  int number;

  cout << "ENTER THE VALUE FOR FACTORIAL: ";
  cin >> number;

  if (number < 0) {
    cout << "NEGATIVE NUMBERS WILL NOT BE ACCEPTED";
  } else {
    cout << "THE FACTORIAL OF " << number << " IS: " << factorial(number) << endl; 
  }

  return 0;
}
 