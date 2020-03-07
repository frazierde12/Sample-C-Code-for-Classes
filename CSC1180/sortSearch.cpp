#include <iostream>
#include <array>
#include <string>
#include<algorithm>

using namespace std;

int main()
{

  const size_t CSIZE = 7;
  array<string, CSIZE> colors{"red", "orange", "yellow", "Green", "blue", "indigo", "violent"};

  // print out array two ways
  for (string item : colors)
    {
      cout << item << " ";
    }
  cout << endl;
  cout<< "********" << endl;

  sort(colors.begin(), colors.end());

  binary_search(colors.begin(), colors.end(), "indigo")
  
  return 0;
}

