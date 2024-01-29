#include <iostream>
using namespace std;

int id = 10;

int nextId()
{
  return id++;
}

int main(int argc, char const *argv[])
{
  cout << nextId() << endl;
  cout << nextId() << endl;
  cout << nextId() << endl;

  return 0;
}
