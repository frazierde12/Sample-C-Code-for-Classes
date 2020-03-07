#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
  Date d1(12,12,12);
  Date d2(15, 15, 15);

  cout << d1.displayDate() << endl;
  cout << d2.displayDate() << endl;
  
  return 0;
}

