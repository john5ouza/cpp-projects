#include <iostream>
using namespace std;

int main()
{
  int arr[] = {47, 33, 72, 13, 88};
  int* p01 = &arr[0];

  cout << "Value array: " << *p01 << endl;

  p01++;
  cout << "INT next value of array: " << *p01 << endl;

  cout << "================================================" << endl;

  int w = 123;
  int* p02 = &w;

  cout << "Reference: " << p02 << endl;
  cout << "Value: " << *p02 << endl;
  cout << "Real value: " << p02[0] << endl;

  *p02 = 321;
  cout << "New value: "<< *p02 << endl;
  cout << "New real value: " << w << endl;

  return 0;
}
