#include <iostream>
using namespace std;

int factorial(int n)
{
  // Base Case: factorial of 0 or 1 is 1
  if (n == 0 || n == 1)
    return 1;
  
  // Recursive Call: n! = n * (n-1)!
  return n * factorial(n - 1);
}

int main()
{
  cout << factorial(5) << endl;  // Example: 5! = 5 * 4 * 3 * 2 * 1 = 120
  return 0;
}
