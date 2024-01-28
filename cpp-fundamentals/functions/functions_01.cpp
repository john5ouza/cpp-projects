#include <iostream>
using namespace std;

void sayHello()
{
  cout << "Hello Friend!" << endl;
}

void sayHelloTo(string name)
{
  cout << "Hello " << name << ", you're welcome!" << endl;
}

string sayHi()
{
  return "Hi, john";
}

string returnHi(string name)
{
  return "Hi " + name + "!";
}

int main()
{
  sayHello();
  sayHelloTo("John");
  cout << sayHi() << endl;

  string greetings = sayHi();
  greetings.append("!!!");
  cout << greetings << endl;

  cout << returnHi("John Souza") << endl;

  return 0;
}
