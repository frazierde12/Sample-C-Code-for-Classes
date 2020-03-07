#include <string>
#include <iostream>
#include "S.h"



S::S(std::string f, std::string l)
{
  first = f;
  last = l;

  for (size_t i = 0; i<10; i++)
    {
      grades[i] = 0;
    }
}

std::string S::getName();
{
  return first + " " + last;
}

void S::displayGrade()
{

}

void S::addGrade(int i)
{
  std::cout << "Enter the grade (1-10): ";
  std::cin >> grades[i-1]; 

}

int S::calculateGrade()
{
  int count{0};
  int sum{0};  

}
