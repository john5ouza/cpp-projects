// PI = 3.1415
// PI * RADIUS * RADIUS

#include <iostream>
using namespace std;

int main()
{
  const double PI = 3.1415;
  double radius;

  cout << "ENTER RADIUS: ";
  cin >> radius;

  double area = PI * radius * radius;
  cout << "AREA IS: " << area << endl;

  return 0;
}