#include <iostream>
#include <stdexcept>
#include "Time.cpp"
using namespace std;

void displayTime(const string& message, const Time& time)
{
  cout << message << "\nUniversal Time: " << time.toUniversalString() << endl;
}

int main()
{
  Time t1;
  Time t2(2);
  Time t3(21, 34);
  Time t4(12, 25, 42);
  
  displayTime("t1: all arguments defaulted", t1);
  displayTime("t2: hour specified", t2);
  displayTime("t3: hour and minute specified", t3);
  displayTime("t4: all specified", t4);  

    try {
    Time t5(27, 74, 99);
     }
  catch (invalid_argument& e)
    {
      c4err << "Excpetion whil initializing t5: " << e.what() << endl;
    }
    

  return 0;
}

