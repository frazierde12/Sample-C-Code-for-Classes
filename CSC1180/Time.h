#include <string>

#ifndef TIME_H
#define TIME_H

// Time Class Definition

class Time{
 public:
  explicit Time(int = 0, int = 0, int = 0); // default constructor

  // set functions
  void setTime(int, int, int);  // set hour, minute, second
  void setHour(int);            // set hour
  void setMinute(int);          // set minute
  void setSecond(int);          // set second

  // get functions
  unsigned int getHour() const;      // return hour
  unsigned int getMinute() const;    // return minute
  unsigned int getSecond() const;    // return second

  std::string toUniversalString() const; // 24-hour time format string

 private:
  unsigned int hour{0};     // 0 -23 (24-hour clock format)
  unsigned int minute{0};   // 0-59
  unsigned int second{0};   // 0 -59

};
#endif
