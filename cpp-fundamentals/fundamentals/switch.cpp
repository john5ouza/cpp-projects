#include <iostream>
using namespace std;

int main()
{
  int numberOfDays;

  cout << "ENTER A MONTH: " << endl;
  cin >> numberOfDays;

  switch (numberOfDays)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    numberOfDays = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    numberOfDays = 30;
    break;
  default:
    numberOfDays = -1;
    break;
  }

  cout << numberOfDays << " DAYS " << endl;

  return 0;
}