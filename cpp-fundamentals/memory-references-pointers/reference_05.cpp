#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  string greetings = "Hi!";
  string &ref = greetings;

  cout << greetings << "\t" << ref << endl;
  cout << &greetings << "\t" << &ref << endl;

  string name = "John";
  ref = name;
  cout << name << "\t" << ref << "\t" << greetings << endl;
  cout << &name << "\t" << &greetings << "\t" << &ref << endl;

  ref.append("!!!");
  cout << greetings << endl;

  greetings.append(" +! ");
  cout << ref << endl;

  return 0;
}
