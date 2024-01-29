#include <iostream>
using namespace std;

//Global variable ex:
// static int year = 2022;

int numYear()
{
  static int year = 2022;
  return year++;
}

int main()
{
  cout << numYear() << endl;
  cout << numYear() << endl;
  cout << numYear() << endl;
  return 0;
}
