#include <iostream>
using namespace std;

int main()
{
  const size_t BSIZE = 4;
  int b[]{10, 20, 30, 40};
  int* bPtr = b;

  for (size_t i = 0; i < BSIZE; i++)
    {
      cout << "b[" << i << "] = " << b[i] << endl;
    }

  for (size_t offset = 0; offset < BSIZE; offset++)
    {
      cout << "*(b+ " << offset << ") = " << *(b+offset) << endl;
   
    }
  
  
  return 0;
}

