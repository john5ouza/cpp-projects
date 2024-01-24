#include <iostream>
using namespace std;

int main()
{
  double price = 99.80;
  double tax = 0.08;
  double finalPrice = price * (1 + tax);

  cout << "The final price is: " << finalPrice << endl;

  return 0;
}
