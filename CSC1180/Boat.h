#ifndef BOAT_H
#define BOAT_H

class Boat
{

public:

  // Constructor(s)
  Boat(int, int, int, int);

  // Accessors
  std::string getLocation() const;
  int getHeight() const;
  
  // Mutators
  void fore();     // yPos++
  void aft();      // yPos--
  void port();     // xPos--
  void starbord(); // xPos++
  void displayLocation();  
  
private:
  // member data
  int length;
  int masts;
  int height;
  int beam;
  int xPos;
  int yPos;

  
};
#endif
