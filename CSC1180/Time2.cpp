#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time2.h"

using namespace std;

Time2::Time2(int h, int m, int s)
{
  setTime(h, m, s);
  
}

void Time2::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);
  
}

void Time2::setHour(int h)
{
  if (h >= 0 && h < 24)
    {
      hour = h;
    }
  else
    {
      throw invalid_argument("hour must be 0-23");
    }
}

void Time2::setMinute(int m)
{
  if (m >= 0 && m < 60)
    {
      minute = m;
    }
  else
    {
      throw invalid_argument("minute must be 0-59");
    }  

}

void Time2::setSecond(int s)
{
  if (s >= 0 && s < 60)
    {
      second = s;
    }
  else
    {
      throw invalid_argument("second must be 0-59");
    }    
}

unsigned int Time2::getHour() const
{
  return hour;
}

unsigned int Time2::getMinute() const
{
  return minute;
}

unsigned int Time2::getSecond() const
{
  return second;
}

string Time2::toUniversalString() const
{
  ostringstream output;
  output << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute()
	 << ":" << setw(2) << getSecond();
  return output.str();
}


  
