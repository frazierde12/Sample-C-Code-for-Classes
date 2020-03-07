#include <iostream>
#include <string>
#include "Roman.cpp"

using namespace std;

int main()
{

  Roman r1("MCXIV");
  cout << r1.getRoman() << '\t' << r1.getDecimal() << endl;
  
  return 0;
}

