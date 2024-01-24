// REFERENCE IN FUNCTION

#include <iostream>
using namespace std;

void incrementNumber(int &num)
{
  num++;
}

int main(int argc, char const *argv[])
{
  int value = 10;
  cout << "Before function: " << value << endl;

  incrementNumber(value);

  cout << "After function: " << value << endl;

  return 0;
}
