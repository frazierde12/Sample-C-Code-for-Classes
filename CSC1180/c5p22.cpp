#include <iostream>
using namespace std;

int main()
{

  int x,y;
  bool p1, p2;

  // part a
  cout << "**********part a *************\n";
  // (x < 5) T (y >=7) T
  x = 2;
  y = 10;

  // orginal
  p1 = !(x < 5) && ! (y >= 7);
  // deMorgan
  p2 = !((x <5) || (y >= 7));
  cout << "T\tT\t" <<  p1 << '\t' << p2 << endl;
 
  // (x < 5) T (y >=7) F
  x = 2;
  y = 2;

  // orginal
  p1 = !(x < 5) && ! (y >= 7);
  // deMorgan
  p2 = !((x <5) || (y >= 7));
  cout << "T\tF\t" << p1 << '\t' << p2 << endl; 
  
  // (x < 5) F (y >=7) T
  x = 12;
  y = 10;

  // orginal
  p1 = !(x < 5) && ! (y >= 7);
  // deMorgan
  p2 = !((x <5) || (y >= 7));
  cout << "F\tT\t" <<p1 << '\t' << p2 << endl;

  // (x < 5) F (y >=7) F
  x = 12;
  y = 5;

  // orginal
  p1 = !(x < 5) && ! (y >= 7);
  // deMorgan
  p2 = !((x <5) || (y >= 7));
  cout << "F\tF\t" << p1 << '\t' << p2 << endl;  
  return 0;
}

