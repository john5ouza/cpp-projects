#include <iostream>
using namespace std;

int main()
{
  double finalGrade;

  cout << "ENTER THE FINAL GRADE: ";
  cin >> finalGrade;

  if (finalGrade >= 7)
    cout << "GREAT!" << endl;
  else
    cout << "SORRY, TRY AGAIN IN THE NEXT SEASON." << endl;

  return 0;
}
