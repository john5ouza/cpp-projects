/*

CHALLENGE 02

Create an algorithm in C++, in which the user
informs the grades of three tests of a given
student and also the average grade of the entire class. O
algorithm must calculate the average of this student and
inform if your grade is above average,
below average or is average.

*/

#include <iostream>
using namespace std;

int main() {

  int n01, n02, n03, classAverage;

  cout << "TYPE THE SCORE 01: ";
  cin >> n01;
  cout << "TYPE THE SCORE 02: ";
  cin >> n02;
  cout << "TYPE THE SCORE 03: ";
  cin >> n03;
  cout << "ENTER THE CLASS AVERAGE: ";
  cin >> classAverage;

  int mediaGrade = (n01 + n02 + n03) / 3;

  if (mediaGrade >= 8) {
    cout << "HIGH SCORE, CONGRATULATIONS!";
  } else if (mediaGrade <= 5) {
    cout << "LOW SCORE, TRY ONE MORE TIME.";
  } else {
    cout << "YOU'RE ON AVERAGE";
  }

  return 0;
}

