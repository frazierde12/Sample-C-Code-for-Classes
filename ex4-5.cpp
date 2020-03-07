#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
  vector<int> intList;
  intList.push_back(13);
  intList.push_back(75);
  intList.push_back(28);
  intList.push_back(35);

  for (int i = 0; i < intList.size(); i++)
    {
      cout << intList[i] << " ";
    }
  cout << endl;

  vector<int>::iterator listIt;
  
  listIt = intList.begin();
  ++listIt;
  ++listIt;
  intList.insert(listIt, 88);

  for (int i = 0; i < intList.size(); i++)
    {
      cout << intList[i] << " ";
    }
  cout << endl;  
  
  

  return 0;
}
