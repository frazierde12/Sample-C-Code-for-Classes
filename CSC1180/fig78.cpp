#include <iostream>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main()
{
  default_random_engine engine(static_cast<unsigned int>(time(0)));
  uniform_int_distribution<unsigned int> randomInt(1,6);

  const size_t FSIZE = 7;
  array<unsigned int, FSIZE> frequency{};

  // roll die 60,000,000 : use the die value as frequency index
  for(unsigned int roll = 1; roll <= 60000000; roll++)
    {
     frequency[randomInt(engine)]++;
    }

  // print out the frequencies in a pleasing way
  cout << "Face\tFrequency" << endl;
  for(size_t i = 1;i<FSIZE; i++)
    {
      cout << i << '\t' << frequency[i] << endl;
    }
  
  return 0;
}

