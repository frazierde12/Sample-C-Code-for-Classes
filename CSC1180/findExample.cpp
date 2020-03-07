#include <iostream>
#include <string>

using namespace std;

int main()
{
  string first{"ocnoceo"};
  int pos{0};

  while(pos != -1)
    {
      pos = first.find('o',pos + 1);
      cout << pos << endl;
    }


  return 0;
}

