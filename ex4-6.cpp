#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
  int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75};

  vector<int> vecList(9);

  ostream_iterator<int> screen(cout, "x-x");

  // print out intArray using copy
  copy(intArray, intArray + 9, screen);
  cout << endl;

  // copy intArray to vecList
  copy(intArray, intArray + 9, vecList.begin());

  // print out vecList with copy
  copy(vecList.rbegin(), vecList.rend(), screen);
  cout << endl;

  return 0;
}

