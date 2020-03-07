#include <iostream>
#include <string>
#include "HeartRate.h"

using namespace std;

int main()
{

  HeartRate bob("Bob", "Jacobs", 12, 3, 1990);
  HeartRate jane("Jane", "Green", 5, 6, 1880);

  cout << bob.getFirst() << endl;
  cout << bob.age() << endl;
  cout << "Max heart rate is " << bob.maxHeartRate() << endl;

  cout << jane.getFirst() << endl;
  cout << jane.age() << endl;
  cout << "Max heart rate is " << jane.maxHeartRate() << endl;  

  cout << "Bob Safe heart range " << bob.maxHeartRate()*.5 <<
    " - " << bob.maxHeartRate()*.85 << endl;

  cout << "Jane Safe heart range " << jane.maxHeartRate()*.5 <<
    " - " << jane.maxHeartRate()*.85 << endl;
  
  return 0;
}

