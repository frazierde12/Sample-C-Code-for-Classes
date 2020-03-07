#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.h"

using namespace std;

int main()
{
  DollarAmount d1{12345};
  DollarAmount d2{1576};

  cout << d1.toString() << endl;
  cout << d2.toString() << endl;  
  
  //  cout << "After adding d2(" << d2.toString()

  return 0;
}

