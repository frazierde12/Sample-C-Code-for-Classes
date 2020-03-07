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

  DollarAmount d(1000);  
  d1.add(d);

  cout << d1.toString() << endl;
  cout << d2.toString() << endl;    

  
  return 0;
}

