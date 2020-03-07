#include <iostream>
#include <array>
using namespace std;

int main()
{
  // define array sizes
  const size_t RSIZE = 20;
  const size_t FSIZE = 6;

  // place the survey results in the responses array
  const array<unsigned int, RSIZE> responses{
    1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5};

  // initialize the frequency counter to 0;
  array <unsigned int, FSIZE> frequency{};
  for (size_t answer = 0; answer < RSIZE; answer++)
    {
      frequency[responses[answer]]++;
    }

  cout << "Rating" << '\t' << "Frequency" << endl;
  for (size_t rating = 1; rating < FSIZE; rating++)
    {
      cout << rating << '\t' << frequency[rating] << endl;
    }
  

  return 0;
}

