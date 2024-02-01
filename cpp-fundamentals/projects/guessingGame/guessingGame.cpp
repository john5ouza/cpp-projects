#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  cout << "****************************" << endl;
  cout << "WELCOME TO THE GUESSING GAME" << endl;
  cout << "****************************" << endl;

  const int SECRETNUMBER = 42;

  bool gotWrong = true;
  int attempts = 0;

  while (gotWrong)
  {

    attempts ++;
    cout << "ATTEMPT: " << attempts << endl;

    int guessingNumber;
    cout << "ENTER THE NUMBER: ";
    cin >> guessingNumber;

    cout << "YOUR SHOT IS: " << guessingNumber << endl;

    bool rightNumber = guessingNumber == SECRETNUMBER;
    bool biggerThanNumber = guessingNumber > SECRETNUMBER;

    if (rightNumber) {
      cout << "****************************" << endl;
      cout << "CONGRATULATION, YOU GOT THE SECRET NUMBER!" << endl;
      cout << "****************************" << endl;

      gotWrong = false;
    }
    else if (biggerThanNumber) {
      cout << "****************************" << endl;
      cout << "YOUR SHOT IS BIGGER THAN SECRET NUMBER!" << endl;
      cout << "****************************" << endl;

    }
    else {
      cout << "****************************" << endl;
      cout << "YOUR SHOT IS LESS THAN SECRET NUMBER!" << endl;
      cout << "****************************" << endl;

    }

  }

  cout << "YOU SHOT THE SECRET NUMBER WITH " << attempts << " ATTEMPTS." << endl;

  cout << "THANKS TO PLAY." << endl;

  return 0;
}
