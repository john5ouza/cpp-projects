#include <iostream>
using namespace std;

int main()
{
  // for (int i = 1; i <= 10; i++)
  // {
  //   cout << i << " ";
  // }

  // for (int j = 10; j >= 0; j -= 2)
  // {
  //   cout << j << " ";
  // }

  int number = 0;
  int total = 0;
  int qty = 0;

  for (; number != -1;)
  {
    cout << "TYPE YOUR GRADE OR -1 TO FINISH: ";
    cin >> number;

    if (number != -1)
    {
      total += number;
      qty++;
    }
  }

  // cast
  double avg = ((double)total) / qty;
  cout << avg << endl;

  return 0;
}
