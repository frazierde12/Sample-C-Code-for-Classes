#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int intArray[7] = {1, 3, 5, 7, 9, 11, 13};
  vector<int> vecList(intArray, intArray + 7);

  cout << vecList.front() << '\t' << vecList.back() << endl;
  
  //  vecList.push_back(1); 
  //  vecList.push_back(3); 
  
  vector<int>::iterator intVecIter;

  intVecIter = vecList.begin();
  cout << *intVecIter << endl;
  ++intVecIter;
  cout << *intVecIter << endl;

  vecList.insert(intVecIter, 22);
  return 0;
}

