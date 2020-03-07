#include <iostream>
using namespace std;

int main()
{

  int b[]{10,20,30,40};
  const size_t BSIZE = 4;
  int* bPtr {b};

  // output using array subscript
  for(size_t i = 0; i < BSIZE; i++)
    {
      cout << "b[" << i << "] = " << b[i] << endl;
    }

  cout << endl;
  for(size_t offset = 0; offset < BSIZE; offset++)
    {
      cout << "b(" << offset << ") = " << *(b+offset) << endl;      
    }
  cout << endl;
  for(size_t i = 0; i<BSIZE; i++)
    {
      cout << "bPtr[" << i << "] = " << bPtr[i] << endl;
    }
    cout << endl;
  for(size_t offset = 0; offset < BSIZE; offset++)
    {
      cout << "*(bPtr + " << offset << ") = " << *(bPtr + offset) << endl;
    }
  
    
  

  
  return 0;
}

