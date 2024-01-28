#include <iostream>
#include "function_02.h"
using namespace std;

int main()
{
  log( 3, false );
  log( 3 );
  log();
  log( false );
  
  return 0;
}

void log(int number, bool newLine) {
  cout << "Number: " << number;
  newLine ? cout << endl : cout << " ";
}