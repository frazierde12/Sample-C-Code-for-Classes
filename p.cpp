#include <iostream>
using namespace std;

int main()
{
  // char - 1 byte
  // int  - 4 bytes
  // double - 8 bytes
  // 1 byte = 8 bits 00000000 to 11111111

int *board[4];
 for (int row = 0; row < 4; row++)
   {
     board[row] = new int[6];
   }
  
  return 0;
}

