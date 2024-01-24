#include <iostream>
using namespace std;

int main()
{
  string title = "Mr. ";
  string name("John");
  string surname("Souza");

  string end(10, '!');

  // cout << name.size() << endl;
  cout << name.append(surname) << endl;
  cout << name << endl;

  return 0;
}
