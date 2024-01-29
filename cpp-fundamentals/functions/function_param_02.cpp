#include <iostream>
using namespace std;

int exec(int (*function)(int, int), int a, int b)
{
  return (*function)(a , b);
}

int add (int a, int b)
{
  return a + b;
}

int subtract (int a, int b)
{
  return a - b;
}

int multi (int a, int b)
{
  return a * b;
}

int min(int a, int b)
{
  return a < b ? a : b;
}

int max(int a, int b)
{
  return a > b ? a : b;
}

int main()
{
  cout << exec(add, 5, 5) << endl; 
  cout << exec(subtract, 12, 6) << endl; 
  cout << exec(multi, 3, 5) << endl; 
  cout << exec(min, 10, 5) << endl;
  cout << exec(max, 10, 5) << endl;
  
  return 0;
}
