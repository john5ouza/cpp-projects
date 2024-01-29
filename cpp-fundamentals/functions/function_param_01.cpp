#include <iostream>
using namespace std;

void execFunction(void (*function)(int), int value) 
{
  function(value);
}

void functionEx(int value) 
{
  cout << value << endl;
}

int main()
{
  execFunction(functionEx, 42);

  return 0;
}

