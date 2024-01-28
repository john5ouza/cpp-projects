#include <iostream>
using namespace std;

// Recursive function to calculate the n-th term of the Fibonacci sequence
int fibonacci(int n)
{
  // Base Case: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
  if (n == 0 || n == 1)
    return n;

  // Recursive Calls: Fibonacci of n = Fibonacci of (n-1) + Fibonacci of (n-2)
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  // Print the first terms of the Fibonacci sequence
  for (int i = 0; i < 10; ++i)
  {
    cout << fibonacci(i) << " ";
  }

  return 0;
}
