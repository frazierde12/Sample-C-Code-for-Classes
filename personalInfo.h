class personalInfo
{
 public:
  void setPersonalInfo(string first, string last, int month, int day, int year, int ID);

  void printPersonalInfo() const;

  personalInfo(string first = "", string last = "", int month = 1, int day = 1, int year = 1900, int ID = 0);

 private:
  Person name;
  Date bDay;
  int personID;
};
  
