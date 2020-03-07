#include <iostream>
#include <ctime>
#include "utilities.h"
using namespace std;

int main()
{
  ClearScreen();
  cout << "Time Examples" << endl;
  time_t now = time(0);

  tm *ltm = localtime(&now);

  cout << "Year\t" << 1900 + ltm->tm_year << endl;
  cout << "Month:\t" << 1 + ltm->tm_mon << endl;
  cout << "Day:\t" << ltm->tm_mday << endl;
  cout << "Time:\t" << 1 + ltm->tm_hour << ":";
  cout << 1 + ltm->tm_min << ":";
  cout << 1 + ltm->tm_sec << endl;

  int y = 1900 + ltm->tm_year;
  cout << y << endl;
  return 0;
}



