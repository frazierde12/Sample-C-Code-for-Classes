// Date class
#include <string>
class Date
{
 public:
  Date(int m, int d, int y)
    {
      if (m <1 || m>12)
	{
	  m = 1;
	}
      month = m;
      day = d;
      year = y;
    }
  // accessor
  int getMonth() const
  {
    return month;
  }

  int getDay() const
  {
    return day;
  }

  int getYear() const
  {
    return year ;
  }  

  // mutators
  
  void setMonth(int m)
  {
      if (m <1 || m>12)
	{
	  m = 1;
	}
      month = m;
  }

  void setDay(int d)
  {
    day = d;

  }

  void setYear(int y)
  {
    year = y;
  }

  std::string  displayDate()
  {
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
  }
  

 private:
  int month;
  int day;
  int year;
 

};
