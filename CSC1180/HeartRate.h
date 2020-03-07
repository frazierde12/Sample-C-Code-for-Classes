// v
#include <string>

class HeartRate
{
 public:
  HeartRate(std::string f, std::string l, int m, int d, int y)
    {
      first = f;
      last = l;
      month = m;
      day = d;
      year = y;
    }

  //mutators
  void setFirst(std::string f)
  {
    first = f;
  }

  void setMonth(int m)
  {
    month = m;
  }

  std::string getFirst() const
    {
      return first;
    }

  int getYear() const
  {
    return year;
  }

  int age()
  {
    return 2019 - year;
  }

  int maxHeartRate()
  {
    return 220 - this->age();
  }
  
 private:
  std::string first;
  std::string last;
  int month;
  int day;
  int year;

};
