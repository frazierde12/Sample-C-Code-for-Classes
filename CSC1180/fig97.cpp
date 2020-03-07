#include <iostream>
#include <stdexcept>
#include "Time2.cpp"

using namespace std;

void displayTime(const Time2& time);


int main()
{
  Time2 t1;
  Time2 t2(2);
  Time2 t3(9, 34);
  Time2 t4(12,25,42);
  
  displayTime(t1);
  displayTime(t2);
  displayTime(t3);
  displayTime(t4);  

  Time2 t5(27, 74, 99);
  
  
  return 0;
}

void displayTime(const Time2& time)
{
  cout << time.toUniversalString() << endl;
}
